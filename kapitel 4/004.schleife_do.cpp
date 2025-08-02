#include <iostream>
using namespace std;

int main()
{
    int anzahl;

    do
    {
        cout << "anzahl eingeben zwischen 1 bis 10" << endl;
        cin >> anzahl;
    }

    while (anzahl < 1 || anzahl > 10);
    cout <<"anzahl"<<anzahl<<endl;
    return 0;

}