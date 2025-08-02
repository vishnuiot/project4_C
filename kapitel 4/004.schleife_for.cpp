#include <iostream>
using namespace std;

int main()
{
    int i;
    float preis = 0, summe = 0.0;

    for (i = 1; i <= 4; i++)
    {
        cout << "Bitte artkel Preis eingeben " << i << endl;
        cin >> preis;
        summe = summe + preis;
    }
    cout << "Summe :" << summe << "\n";
    return 0;
}