#include "stdafx.h"
#include "CppUnitTest.h"

#include "../ProjectCrawler/IdentifiableObject.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(IdentifiableObjectTests)
{
public:
	TEST_METHOD(TestAreYou)
	{
		std::vector<std::string> lIdentifiers;
		lIdentifiers.push_back("id1");
		lIdentifiers.push_back("id2");

		IdentifiableObject lTestObject(lIdentifiers);

		// Test correct identites
		Assert::IsTrue(lTestObject.AreYou(std::string("id1")));
		Assert::IsTrue(lTestObject.AreYou(std::string("ID2")));

		// Test incorrect identities
		Assert::IsFalse(lTestObject.AreYou(std::string("id3")));
		Assert::IsFalse(lTestObject.AreYou(std::string("ID4")));
	}

	TEST_METHOD(TestIdentity)
	{
		std::vector<std::string> lIdentifiers;
		lIdentifiers.push_back("id1");
		lIdentifiers.push_back("id2");

		IdentifiableObject lTestObject(lIdentifiers);

		Assert::AreEqual(std::string("id1"), lTestObject.Identity());
	}

	TEST_METHOD(TestAddIdentifer)
	{
		std::vector<std::string> lIdentifiers;
		lIdentifiers.push_back("id1");
		lIdentifiers.push_back("id2");

		IdentifiableObject lTestObject(lIdentifiers);

		Assert::IsTrue(lTestObject.AreYou(std::string("id1")));
		Assert::IsTrue(lTestObject.AreYou(std::string("id2")));
		Assert::IsFalse(lTestObject.AreYou(std::string("id3")));

		lTestObject.AddIdentifier(std::string("id3"));

		Assert::IsTrue(lTestObject.AreYou(std::string("id3")));
	}
};