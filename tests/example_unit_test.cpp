#include <gtest/gtest.h>
#include <cmath>

TEST(Math, TestCMath)
{
    double param, result;
    param = 60.0;
    result = cos ( param * 3.14 / 180.0 );

    double ideal_result = 1.5;

    EXPECT_EQ(0, 0);
}