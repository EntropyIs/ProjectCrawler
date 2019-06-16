#include "GameObject.h"

GameObject::GameObject(std::string & aIdentifier, const std::string & aName, const std::string & aDescription) : IdentifiableObject(aIdentifier)
{
	fDescription = aDescription;
	fName = fName;
}

GameObject::GameObject(const std::vector<std::string>& aIdentifiers, const std::string & aName, const std::string & aDescription) : IdentifiableObject(aIdentifiers)
{
	fDescription = aDescription;
	fName = fName;
}

const std::string & GameObject::Name() const
{
	return fName;
}

const std::string & GameObject::Description() const
{
	return fName + " (" + Identity() + ")";
}

const std::string & GameObject::FullDescription() const
{
	return fDescription;
}
