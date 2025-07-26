#include <iostream>
using namespace std;
int main()
{
    float apfel = 10, birne = 20;
    if (apfel >= 10 && birne >= 40)
    {
        cout << "Preis is gliech \n";
    }
    else if(apfel >= 10 || birne >= 10)
    {
        cout << "apfel oder birne ist teuer \n";
    }
    return 0;
}