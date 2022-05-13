#include "karta_platnicza.h"
#include "iostream"
using namespace std;


/*void karta::przewalutuj()       //Niestety nie mam pojecia co trzeba zrobiæ
{

}*/
void karta_platnicza::wyplac(int Ile)
{
    if (saldo <= 0)
        cout<<"Brak srodkow na koncie: " <<saldo <<"pln" <<endl;

    else if ((saldo-Ile) <0)
        cout<<"Za malo srodkow na koncie: "<<saldo <<"pln" <<endl;
    else
    {
        saldo= saldo - Ile;
        cout<<"Tranzakcje wykonano pomyslnie stan konta po tranzakcji: "<<saldo<<"pln"<<endl;
    }
}

void karta_platnicza::wplac(int Ile)
{
    saldo= saldo + Ile;
    cout<<"Tranzakcje wykonano pomyslnie stan konta po tranzakcji: "<<saldo<<"pln"<<endl;
}

void karta_kredytowa::wyplac(int Ile)
{
    if (dlug+Ile > maxdlug)
    {
        cout<<"Osiagnieto limit kredytowy: "<<maxdlug <<"pln" <<endl;
        dlug=maxdlug;
    }
    else
    {
        dlug = dlug + Ile;
        cout<<"Tranzakcje wykonano pomyslnie stan dlugu kredytowego po tranzakcji: "<<dlug<<"pln"<<endl;
    }

}

void karta_kredytowa::wplac(int Ile)
{
        dlug= dlug - Ile;
        cout<<"Tranzakcje wykonano pomyslnie stan dlugu kredytowego po tranzakcji: "<<dlug<<"pln"<<endl;
}
