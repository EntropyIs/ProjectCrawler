#include "Player.h"

/** 
 *	Locates game object within player with the given identifier.
 *	@param		aIdentifier, identity to search for.
 *	@return		GameObject refernce if found.
 *	@throws		
 */
const GameObject & Player::Locate(std::string aIdentifier)
{
	if (AreYou(aIdentifier))
		return *this;
	else if (fInventory.HasItem(aIdentifier))
		return fInventory.Fetch(aIdentifier);
	throw std::runtime_error(aIdentifier + " Not Found.");
}

/**
 *	Generates full description for player.
 *	TODO: Implement Strings file.
 *	@return		string containing player full description.
 */
const std::string & Player::FullDescription() const
{
	return "You are " + Description() + ", you are carrying: " + fInventory.ItemList();
}

/**
 *	Provides access to players inventory.
 *	@return		Invenotry refernce.
 */
Invenory & Player::Inventory()
{
	return fInventory;
}
