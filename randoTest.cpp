/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, isDivisbleBy)
{
	Rando rando;
	ASSERT_FALSE(rando.isDivisbleBy(2,2));
}

TEST(RandoTest, isPrime)
{
	Rando rando;
	ASSERT_FALSE(rando.isPrime(1));
	ASSERT_TRUE(rando.isPrime(2));
	ASSERT_FALSE(rando.isPrime(0));
	ASSERT_TRUE(rando.isPrime(7));
	ASSERT_FALSE(rando.isPrime(6));
}

TEST(RandoTest, nearestToZero)
{
	Rando rando;
	EXPECT_EQ(1, rando.nearestToZero(1,2));
	EXPECT_EQ(2, rando.nearestToZero(3,2));
	EXPECT_EQ(3, rando.nearestToZero(3,3));
}
