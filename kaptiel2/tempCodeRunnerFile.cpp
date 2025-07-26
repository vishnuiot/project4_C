#include <iostream>
#include <random> // For modern C++ random number generation

using namespace std;

int main()
{
    cout << "Hallo Welt" << endl;
    // 1. Create a source of randomness.
    // `std::random_device` is a source of non-deterministic random numbers,
    // often from hardware entropy, which is great for seeding.
    std::random_device rd;
    // 2. Create a random number engine.
    // `std::mt19937` is the Mersenne Twister engine, a high-quality and
    // fast pseudo-random number generator. We seed it with our random_device.
    std::mt19937 generator(rd());
    // 3. Create a distribution.
    // This maps the engine's output to a specific range and distribution.
    // Here, we want integers uniformly distributed between 1 and 100.
    std::uniform_int_distribution<> distribution(1, 100);
    ;
    // 4. Generate numbers by calling the distribution with the engine.

    int a = distribution(generator);
    int b = distribution(generator);

    std::cout << "Random number 'a' in [1, 100]: " << a << std::endl;
    std::cout << "Random number 'b' in [1, 100]: " << b << std::endl;
    return 0;
}