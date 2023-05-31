typedef enum TEST_LIB_Status
{
    TEST_LIB_OK = 0, /**< All is good. */

    TEST_LIB_RUNTIME_ERROR = -6, /**< Runtime error. */
    TEST_LIB_UNKNOWN_ERROR = -7, /**< Unknown error. */
} TTEST_LIB_Status;

TEST_LIB_Status test_function1();

TEST_LIB_Status test_function2(int a);

TEST_LIB_Status test_function3(int a, int b);