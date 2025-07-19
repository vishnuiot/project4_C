#include <iostream>
#include <iomanip>
# include <cfloat>
using namespace std;

int main()
{
    cout << "float : "<< sizeof(float) << " Bytes" << endl;
    cout <<"von " << FLT_MIN << " bis " << FLT_MAX << endl;
    
    cout << "double : "<< sizeof(double) << " Bytes" << endl;
    cout <<"von " << DBL_MIN << " bis " << DBL_MAX << endl;
    
    cout << "long double : "<< sizeof(long double) << " Bytes" << endl;
    cout <<"von " << LDBL_MIN << " bis " << LDBL_MAX << endl;

    cout << fixed << setprecision(30);
    cout << "1/7 in float : " << 1.0/7.0 << endl;
    cout << "1/7 in double : " << 1.0/7.0 << endl;
    cout << "1/7 in long double : " << 1.0/7.0 << endl;

    
    return 0;
}