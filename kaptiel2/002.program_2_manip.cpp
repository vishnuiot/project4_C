#include <iostream>

#include <iomanip>

using namespace std;

int main () 
{

double preis=4.32;
cout << preis<< "Euro"<< endl;
cout << setfill('.');
cout << setw(6)<<preis<< "Euro"<< endl;
cout << fixed << setprecision(2);
cout << setw(6)<<preis<< "Euro"<< endl;
cout << left;
cout << setw(6)<<preis<< "Euro"<< endl;
cout << right;
cout << setw(6)<<preis<< "Euro"<< endl;
return 0;

}
