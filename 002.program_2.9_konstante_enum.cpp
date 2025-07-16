#include <iostream>
using namespace std;

int main()  

{
    enum farbe{ blau,rot,grun};

    cout << blau << endl;
    cout << rot << endl;
    cout << grun << endl;

    farbe fa;
    fa=grun;
    cout << fa << endl;

    enum farbe myvar=blau;
    switch (myvar)
    {
        case blau:
            cout << "blau" << endl;
            break;
        case rot:
            cout << "rot" << endl;
            break;
        case grun:
            cout << "grun" << endl;
            break;
    }
    
   return 0;


}