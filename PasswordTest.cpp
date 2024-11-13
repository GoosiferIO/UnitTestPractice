/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual); // expectation: is the function working?
	// compares both values, if they are equal, the test passes
}

TEST(PasswordTest, is_ascending)
{
	Password my_password;
	int actual = my_password.is_ascending("abc");
	ASSERT_EQ(1, actual); // expectation: is the function working?
	// compares both values, if they are equal, the test passes
}

TEST(PasswordTest, has_mixed_case)
{
	Password my_password;
	int actual = my_password.has_mixed_case("aBc");
	ASSERT_EQ(1, actual); // expectation: is the function working?
	// compares both values, if they are equal, the test passes
}