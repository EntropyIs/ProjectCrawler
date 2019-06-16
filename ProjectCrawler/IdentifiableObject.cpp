#include "IdentifiableObject.h"

#include <algorithm>

/**
 *	Class Constructor.
 *	Constructs class with given identifier.
 *	@param		aIdentifier, string containing default identifier.
 */
IdentifiableObject::IdentifiableObject(std::string & aIdentifier)
{
	std::transform(aIdentifier.begin(), aIdentifier.end(), aIdentifier.begin(), ::tolower);
	fIdentifiers.push_back(aIdentifier);
}

/**
 *	Class Constructor.
 *	Constructs class from a given set of identifiers.
 *	@param		aIdentifiers, vector containing identifiers, in form of strings.
 */
IdentifiableObject::IdentifiableObject(const std::vector<std::string>& aIdentifiers)
{
	for (size_t i = 0; i < aIdentifiers.size(); i++)
	{
		std::string lData = aIdentifiers[i];
		std::transform(lData.begin(), lData.end(), lData.begin(), ::tolower);
		fIdentifiers.push_back(lData);
	}
}

/**
 *	Are You.
 *	Checks if the provided identifier is in the set of identifiers.
 *	@param		aIdentifier, identifier to check for.
 *	@return		bool, true if identifier is found.
 */
const bool IdentifiableObject::AreYou(std::string & aIdentifier) const
{
	std::transform(aIdentifier.begin(), aIdentifier.end(), aIdentifier.begin(), ::tolower);
	for (size_t i = 0; i < fIdentifiers.size(); i++)
		if (aIdentifier == fIdentifiers[i])
			return true;
	return false;
}

/**
 *	Identify.
 *	Returns default identifier.
 *	@return		string, default identifier.
 */
const std::string & IdentifiableObject::Identity() const
{
	return fIdentifiers[0];
}

/**
 *	Add Identifier.
 *	Adds given identifier to identifier set, filters out duplicate identifiers.
 *	@param		aIdentifier, string containing identifier.
 */
void IdentifiableObject::AddIdentifier(std::string & aIdentifier)
{
	std::transform(aIdentifier.begin(), aIdentifier.end(), aIdentifier.begin(), ::tolower);
	if (!AreYou(aIdentifier))
		fIdentifiers.push_back(aIdentifier);
}
