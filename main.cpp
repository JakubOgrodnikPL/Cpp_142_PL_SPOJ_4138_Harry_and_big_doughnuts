#include <iostream>
using namespace std;

int main()
{
    int liczba_kotow,sila,masa_paczka,masa_calkowita,liczba_testow;
    cin>>liczba_testow;
    while(liczba_testow>=1)
    {
        cin>>liczba_kotow>>sila>>masa_paczka;
        masa_calkowita=liczba_kotow*masa_paczka;
        if(sila>=masa_calkowita) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        liczba_testow--;
    }
    return 0;
}
