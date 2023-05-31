#include <cstdio>
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include "test_modules/test_modules_d/test_module1d.h"

int test_foo3d1()
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

    return 0;
}
   
int test_foo3d2()
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

    return 0;
}

int test_foo3d3()
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

    return 0;
}

int test_foo3d4()
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

    return 0;
}

int test_foo3d5()
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

    return 0;
}