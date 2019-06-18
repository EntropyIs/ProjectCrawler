#pragma once

#include <string>
#include <vector>

/**
 *	Identifiable Object.
 *	TODO: Add adiquate class description.
 *	@author		J.P. Galovic.
 *	@date		06/2019.
 */
class IdentifiableObject
{
protected:
	std::vector<std::string> fIdentifiers;

public:
	IdentifiableObject(std::string & aIdentifier);
	IdentifiableObject(const std::vector<std::string>& aIdentifiers);
	IdentifiableObject() {};
	virtual ~IdentifiableObject() {};

	const bool AreYou(std::string & aIdentifier) const;
	const std::string & Identity() const;

	void AddIdentifier(std::string & aIdentifier);
};

