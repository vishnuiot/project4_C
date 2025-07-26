#include <iostream> 
using namespace std;
int main()  
{   
    int preis,rest;
    cout<<"Bitte Preis eingeben zwishen 1 bis 10: "<<endl;
    cin>>preis;
    rest=preis%3;
    cout<<"Der Rest ist: "<<rest<<endl;
    return 0;
}
