#include<iostream>
using namespace std;
int main()
{
    double preis=.56;
    int preiskatogorie;

    preiskatogorie=preis>=0?2:1;
    cout<<preiskatogorie<<endl;
    
    cout <<(preis >=1 ?"Ein teurer Artikel":"Ein billiger Artikel")<<endl;
    return 0;


}