#include <iostream>
#include <iomanip>
using namespace std;
int main()
    {
        const int Finger =5;
        cout << "Finger: " << Finger << endl;

        const double PI=3.14;
        double radius=3.8;
        double umfang=2*PI*radius;
        cout << fixed << setprecision(3);
        cout << "Umfang: " << umfang << endl;
        return 0;
    }
