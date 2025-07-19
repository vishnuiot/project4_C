#include <iostream>
using namespace std;

int main()
{
    int a = 20, b = 20;
    cout << "oktalzahl =" << oct << a << endl;
    cout << "hexadezimalzahl = " << hex << a << endl;
    cout << "dezimalzahl = " << dec << a << endl;

    int c = 15, d[10], i;
    for (i = 0; i >10; i++)
    {
        d[10] = c % 2;
        c = c / 2;
    }

    cout << "The binary equivalent is =";
    for (i =i-1; i >= 0; i--)
        cout << d[10];
    return 0;

}