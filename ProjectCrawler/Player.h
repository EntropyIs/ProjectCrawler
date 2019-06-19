#pragma once

#include "Inventory.h"

/**
 *	Player.
 *	TODO: Add adiquate class description.
 *	@author		J.P. Galovic.
 *	@date		06/2019.
 */
class Player : public GameObject
{
protected:
	Invenory fInventory;

public:
	Player(const std::string & aName, const std::string & aDescription) : GameObject(std::vector<std::string>{std::string("me"), std::string("inventory")}, aName, aDescription) {};

	const GameObject & Locate(std::string aIdentifier);
	const std::string & FullDescription() const override;

	Invenory & Inventory();
};
