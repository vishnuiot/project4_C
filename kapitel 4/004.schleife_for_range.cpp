#include<iostream>
using namespace std;

int main()
{
    double  preis=10.56;
    for (auto anzahl:{25,78,22})
    {
        cout<<anzahl <<" birnen = "<<anzahl*preis<<endl;
        // cout<<"gesamtpreis"<<anzahl="gesamtpreis "<<anzahl*preis<<endl;
    }
    return 0;
}