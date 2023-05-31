#include <cstdio>
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include "test_module1a.h"

int test_foo1a()
{
    // First create an instance of an engine.
    std::random_device rnd_device;
    // Specify the engine and distribution.
    std::mt19937 mersenne_engine {rnd_device()};  // Generates random integers
    std::uniform_int_distribution<int> dist {1, 52};

    auto gen = [&dist, &mersenne_engine](){
                    return dist(mersenne_engine);
                };

    std::vector<int> vec(10000000);
    generate(begin(vec), end(vec), gen);

    sort(vec.begin(), vec.end());

    std::cout<<"test_foo1, test_module_a"<<std::endl;

    return 0;
}
   
