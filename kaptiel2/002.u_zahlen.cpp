#include <iostream>
using namespace std;

int main()
{
    int anzahl_1, anzahl_2, anzahl_3,summe,mittelwert;
    cout <<"Erste Anzahl eingeben:";
    cin >> anzahl_1;
    cout <<"Zweite Anzahl eingeben:";
    cin >> anzahl_2;
    cout <<"Dritte Anzahl eingeben:";
    cin >> anzahl_3;
    cout << "Erste Anzahl wert= " << anzahl_1 << endl;
    cout << "Zweite Anzahl wert= " << anzahl_2 << endl;
    cout << "Dritte Anzahl wert= " << anzahl_3 << endl;

    summe=anzahl_1+anzahl_2+anzahl_3;
    mittelwert=summe/3;
    cout << "summe= " << summe << endl;
    cout << "mittelwert= " << mittelwert << endl;
    return 0;
}

