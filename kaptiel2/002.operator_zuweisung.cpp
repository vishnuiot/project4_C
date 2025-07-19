# include <iostream>
using namespace std;
int main()
{
    double anzahl=5;
    cout <<"Anzahl eingeben:";
    // cin >> anzahl;
    cout << "Anzahl wert= " << anzahl << endl;
    cout << anzahl ++ << "++ ergibt =" << anzahl << endl;
    cout << anzahl  -- << "-- ergibt =" << anzahl << endl;
    anzahl +=9;cout <<"+9 ergibt =" << anzahl << endl;
    anzahl -=5;cout <<"-5 ergibt =" << anzahl << endl;


    return 0;
}