#include <gtest/gtest.h>
#include "main.cpp"

TEST(TemperatureTest, FeezingPoint)
{
	EXPECT_DOUBLE_EQ(celsius_to_fahrenheit(0.0), 32);
}

TEST(TemperatureTest, BoilingPoint)
{
	EXPECT_DOUBLE_EQ(celsius_to_fahrenheit(100.0), 150.0);
}

TEST(TemperatureTest, NegativeValue)
{
	EXPECT_DOUBLE_EQ(celsius_to_fahrenheit(-20.0), -10);
}


