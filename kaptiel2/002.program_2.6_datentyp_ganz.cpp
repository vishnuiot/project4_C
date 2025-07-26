#include<iostream>
#include<climits>
using namespace std;

int main()
{
    cout << "size of short:" <<sizeof(short)<<" Bytes"<<endl;
    cout << "von" << SHRT_MIN << " bis " << SHRT_MAX << endl;
    cout << "size of unsignedshort:" <<sizeof(unsigned short)<<" Bytes"<<endl;
    cout << "von " << 0 << " bis " << USHRT_MAX << endl;
    cout << "size of int:" <<sizeof(int)<<" Bytes "<<endl;
    cout << "von" << INT_MIN << " bis " << INT_MAX << endl;
    cout << "size of unsignedint:" <<sizeof(unsigned int)<<" Bytes"<<endl;
    cout << "von " << 0 << " bis " << UINT_MAX << endl;
    cout << "size of long:" <<sizeof(long)<<" Bytes"<<endl;
    cout << "von" << LONG_MIN << " bis " << LONG_MAX << endl;
    cout << "size of unsignedlong:" <<sizeof(unsigned long)<<" Bytes"<<endl;
    cout << "von " << 0 << " bis " << ULONG_MAX << endl;    
    cout << "size of long long:" <<sizeof(long long)<<" Bytes"<<endl;
    cout << "von" << LLONG_MIN << " bis " << LLONG_MAX << endl;
    cout << "size of unsignedlong long:" <<sizeof(unsigned long long)<<" Bytes"<<endl;
    cout << "von " << 0 << " bis " << ULLONG_MAX << endl;

// Operatations
    int a;
    a=2;
    
// Unsigned
    unsigned int b;
    b=2U;
    cout<< "size of b:" <<sizeof(b)<<" Bytes"<<endl;
// long long
    long long c;
    c=22LL;
    cout<< "size of c:" <<sizeof(c)<<" Bytes"<<endl;
    return 0;
}