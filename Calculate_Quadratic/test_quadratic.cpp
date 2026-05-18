#include <gtest/gtest.h>
#include "quadratic.h"

TEST(QuadraticTest, TwoRealRoots)
{
	
	QuadraticEquation eq(1, -3, 2);
	QuadraticResult result = eq.solve();
	
	EXPECT_TRUE(result.hasRealRoots);
	EXPECT_EQ(result.rootCount, 2);
	EXPECT_DOUBLE_EQ(result.x1, 2.0);
	EXPECT_DOUBLE_EQ(result.x2, 1.0);
	
}

TEST(QuadraticTest, OneRealRoot)
{
	
	QuadraticEquation eq(1, -2, 1);
	QuadraticResult result = eq.solve();
	
	EXPECT_TRUE(result.hasRealRoots);
	EXPECT_EQ(result.rootCount, 1);
	EXPECT_DOUBLE_EQ(result.x1, 1.0);

}

TEST(QuadraticTest, NoRealRoots)
{
	QuadraticEquation eq (1, 1, 2);
	QuadraticResult result = eq.solve();
	
	EXPECT_FALSE(result.hasRealRoots);
	EXPECT_EQ(result.rootCount, 0);
}

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
