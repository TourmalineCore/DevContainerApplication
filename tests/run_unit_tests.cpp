#include <gtest/gtest.h>

int main(int argc, char **argv)
{
    // initialize testing framework
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
