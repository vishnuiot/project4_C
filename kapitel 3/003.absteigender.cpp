#include<iostream>
using namespace std;
int main()
{
    cout <<"Hello \n"<<endl;
    double number1,number2,grosse,kleine;
    cout<<"Erste Zahl eingebnen 1 ";
    cin>>number1;
    cout<<"Zweite Zahl eingebnen 2 ";
    cin>>number2;
    cout<< number1 <<"\n" <<number2<< "\n";
    if (number1>number2)
    {
        grosse=number1;
        kleine=number2;
    }
    else
    {
        grosse=number2;
        kleine=number1;
    }

    cout<<grosse<<"\n"<<kleine<<endl;

    return 0;

}