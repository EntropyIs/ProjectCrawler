#pragma once

#include "GameObject.h"

/**
 *	Item.
 *	TODO: Add adiquate class description.
 *	@author		J.P. Galovic.
 *	@date		06/2019.
 */
class Item : public GameObject
{
public:
	Item(std::string & aIdentifier, const std::string & aName, const std::string & aDescription) : GameObject(aIdentifier, aName, aDescription) {};
	Item(const std::vector<std::string> & aIdentifiers, const std::string & aName, const std::string & aDescription) : GameObject(aIdentifiers, aName, aDescription) {};
	Item() :GameObject() {};
};