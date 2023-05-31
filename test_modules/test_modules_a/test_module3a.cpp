#include <cstdio>
#include <iostream>
#include "test_module3a.h"

int test_foo3a()
{
    int n = 0;
    for (int i=0; i<100; i++)
    {
        n+=i*n;
    }
    std::cout<<"test_foo3, test_module_a"<<std::endl;

    return 0;
}