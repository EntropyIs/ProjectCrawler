#pragma once

#include "IdentifiableObject.h"

/**
 *	Game Object.
 *	TODO: Add adiquate class description.
 *	@author		J.P. Galovic.
 *	@date		06/2019.
 */
class GameObject : public IdentifiableObject
{
protected:
	std::string fDescription;
	std::string fName;

public:
	GameObject(std::string & aIdentifier, const std::string & aName, const std::string & aDescription);
	GameObject(const std::vector<std::string> & aIdentifiers, const std::string & aName, const std::string & aDescription);
	GameObject() :IdentifiableObject() {};

	virtual const std::string & Name() const;
	virtual const std::string & Description() const;
	virtual const std::string & FullDescription() const;
};