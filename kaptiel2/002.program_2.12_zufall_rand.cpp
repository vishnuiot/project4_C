#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(void)  
{
    std::srand(std::time(0)); // use current time as seed for random generator
    cout << "Random number: " << std::rand() << endl;
    int a=10,b;
    std::srand(a);// use assigned number seed for random generator
    cout << "Random number: " << std::rand() << endl;
    cout << "maximum = " << RAND_MAX << endl;
    return 0;
}