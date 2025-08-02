# include<iostream>
using namespace std;
int main()  
{   
    float preis;
    cout<<"Bitte Preis eingeben zwishen 1 bis 10: "<<endl;
    cin>>preis;
    if (preis>1.5)
    {
        cout<<"Ein teurer artikel \n";
        cout<<"Wir nehmen den Artikel nicht ein \n";
    }
    else
    {
        cout<<"Ein billiger rtikel \n";
        cout<<"Wir nehmen den Artikel \n";
    
    }
    return 0;

}