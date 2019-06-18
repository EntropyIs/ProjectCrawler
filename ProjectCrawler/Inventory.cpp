#include "Inventory.h"

#include <stdexcept>

/**
 *	Checks if inventory contains item with the given identifier.
 *	@param		aIdentifier, identifier of item.
 *	@return		boolean, true if item found.
 */
const bool Invenory::HasItem(std::string aIdentifier)
{
	for (size_t i = 0; i < fItems.size(); i++)
		if (fItems[i]->AreYou(aIdentifier))
			return true;
	return false;
}

/**
 *	Puts item into inventory (stored as pointer)
 *	@param		aItem, refernce to item to store.
 */
void Invenory::Put(Item & aItem)
{
	fItems.push_back(&aItem);
}

/**
 *	Takes an item from inventory (removes).
 *	@param		aIdentifier, identifier of item.
 *	@return		Item, refernce to item, if found.
 *	@throws		runtime_error, if Item is not found.
 */
const Item & Invenory::Take(std::string aIdentifier)
{
	try
	{
		// Fetch poiner to Item;
		const Item * lItem = &Fetch(aIdentifier);

		// Remove Item from inventory
		std::vector<Item*> lTempList;
		while (fItems[fItems.size() - 1] != lItem && fItems.size() > 0)
		{
			lTempList.push_back(fItems[fItems.size() - 1]);
			fItems.pop_back();
		}
		for (size_t i = 0; i < lTempList.size(); i++)
			fItems.push_back(lTempList[i]);

		// Return Item
		return *lItem;
	}
	catch (std::runtime_error& e)
	{
		throw e;
	}
}

/**
 *	Finds an item in inventory.
 *	@param		aIdentifier, identifier of item.
 *	@return		Item, refernce to item, if found.
 *	@throws		runtime_error, if Item is not found.
 */
const Item & Invenory::Fetch(std::string aIdentifier)
{
	for (size_t i = 0; i < fItems.size(); i++)
		if (fItems[i]->AreYou(aIdentifier))
			return *fItems[i];
	throw std::runtime_error("Item does not exist in Inventory.");
	return Item();
}

/**
 *	Constructs list of all items contained in inventory.
 *	@return		string.
 */
const std::string & Invenory::ItemList() const
{
	std::string lResult = fItems[0]->Description();
	for (size_t i = 1; i < fItems.size(); i++)
		lResult += ", " + fItems[i]->Description();
	return lResult;
}
