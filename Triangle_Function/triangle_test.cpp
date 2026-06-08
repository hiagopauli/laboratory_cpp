#include <gtest/gtest.h>
#include "triangle.h"

TEST(TriangleTest, ValidTriangle)
{
    Triangle t(3, 4, 5);
    EXPECT_TRUE(t.isValid());
}

TEST(TriangleTest, InvalidTriangle)
{
    Triangle t(1, 2, 10);
    EXPECT_FALSE(t.isValid());
}

TEST(TriangleTest, EquilateralTriangle)
{
    Triangle t(5, 5, 5);
    EXPECT_TRUE(t.isValid());
}

TEST(TriangleTest, NegativeValues)
{
    Triangle t(-1, 2, 3);
    EXPECT_FALSE(t.isValid());
}
