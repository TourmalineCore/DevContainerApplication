#include "interface/test_lib_if.h"
#include "test_modules_a/test_module1a.h"

TEST_LIB_Status test_function1()
{
    test_foo1a();
    return TEST_LIB_OK;
}

TEST_LIB_Status test_function2(int a)
{
    return TEST_LIB_OK;
}

TEST_LIB_Status test_function3(int a, int b)
{
    return TEST_LIB_OK;
}