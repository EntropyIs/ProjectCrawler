#pragma once

#include "Item.h"

/**
 *	Invenotry.
 *	Container designed to hold items.
 *	@author		J.P. Galovic.
 *	@date		06/2019.
 */
class Invenory
{
protected:
	std::vector<Item*> fItems;

public:
	Invenory() {};

	const bool HasItem(std::string aIdentifier);

	void Put(Item & aItem);
	const Item & Take(std::string aIdentifier);
	const Item & Fetch(std::string aIdentifier);

	const std::string & ItemList() const;
};
