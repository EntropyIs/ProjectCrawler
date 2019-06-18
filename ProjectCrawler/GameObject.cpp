#include "GameObject.h"

/**
 *	Constructs Game Object with given identifier, name and description.
 *	@param		aIdentifier, string containing default identifier.
 *	@param		aName, string containing object name.
 *	@param		aDescription, string containing object description.
 */
GameObject::GameObject(std::string & aIdentifier, const std::string & aName, const std::string & aDescription) : IdentifiableObject(aIdentifier)
{
	fDescription = aDescription;
	fName = fName;
}

/**
 *	Constructs Game Object with given identifiers, name and description.
 *	@param		aIdentifiers, vector containing identifiers, in form of strings.
 *	@param		aName, string containing object name.
 *	@param		aDescription, string containing object description.
 */
GameObject::GameObject(const std::vector<std::string>& aIdentifiers, const std::string & aName, const std::string & aDescription) : IdentifiableObject(aIdentifiers)
{
	fDescription = aDescription;
	fName = fName;
}

/**
 *	Fetches name of game object.
 *	@return name of game object.
 */
const std::string & GameObject::Name() const
{
	return fName;
}

/**
 *	Fetches short description of game object.
 *	@return short description of game object, name and identity.
 */
const std::string & GameObject::Description() const
{
	return fName + " (" + Identity() + ")";
}

/**
 *	Fetches full description of game object.
 *	@return full description of game object, contained description.
 */
const std::string & GameObject::FullDescription() const
{
	return fDescription;
}
