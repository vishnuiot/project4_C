#include <iostream>
using namespace std;

int main()  
    {
    int anzahlApfel=2, anzahlBirne=3;
    double preisApfel=4.55,preisBirne=6.77;
    double summe,mittel,anteil,differenz;
    NewFunction(summe, anzahlApfel, preisApfel, anzahlBirne, preisBirne);
    mittel=summe/(anzahlApfel+anzahlBirne);
    anteil=100*anzahlApfel/(anzahlApfel+anzahlBirne);
    differenz=preisApfel-preisBirne;
    cout << "summe= " << summe << endl;
    cout << "mittel= " << mittel << endl;
    cout << "anteil= " << anteil << endl;
    cout << "differenz= " << differenz << endl;
    return 0;
    }
    void NewFunction(double &summe, int anzahlApfel, double preisApfel, int anzahlBirne, double preisBirne)
    {
        summe = anzahlApfel * preisApfel + anzahlBirne * preisBirne;
    }