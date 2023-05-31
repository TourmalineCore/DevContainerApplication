#include <cstdio>
#include <iostream>
#include "test_module1a.h"
#include "test_module2a.h"

int test_foo2a()
{
    test_foo1a();

    std::cout<<"test_foo2, test_module_a"<<std::endl;

    return 0;
}
   