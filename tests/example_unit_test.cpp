#include <gtest/gtest.h>
#include <cmath>

TEST(Math, TestCMath)
{
    double param, result;
    param = 60.0;
    result = cos ( param * PI / 180.0 );

    double ideal_result = 1.5;

    EXPECT_EQ(result, ideal_result);
}