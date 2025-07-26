#include<iostream>
using namespace std;
int main()
{
    float apfel=9.5,birne=6.7,zirtone=9.5;
    if (apfel<zirtone)
    {
        cout << "apfel ist billiger als zirtone \n";
    }
    else if (apfel>zirtone)
    {
        cout << "apfel ist teurer als zirtone \n";
    }
    else
    {
        cout << "apfel und zirtone sind gleich teuer \n";
    }
    return 0;

}