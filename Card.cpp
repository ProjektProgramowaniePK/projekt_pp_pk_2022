#include "Card.h"
#include "iostream"
using namespace std;


/*void karta::przewalutuj()       Dojebane to API
{

}*/
void payment_card::pay_out(int how_much)
{
    if (balance <= 0)
        cout<<"Brak srodkow na koncie: " <<balance <<"pln" <<endl;

    else if ((balance-how_much) <0)
        cout<<"Za malo srodkow na koncie: "<<balance <<"pln " <<"Nie mozna wyplacic: "<<how_much<<"pln "<<endl;
    else
    {
        balance= balance - how_much;
        cout<<"Tranzakcje wykonano pomyslnie stan konta po tranzakcji: "<<balance<<"pln"<<endl;
    }
}

void payment_card::deposit(int how_much)
{
    balance= balance + how_much;
    cout<<"Tranzakcje wykonano pomyslnie stan konta po tranzakcji: "<<balance<<"pln"<<endl;
}

void credit_card::pay_out(int how_much)
{
    if (debt+how_much > maxdebt)
    {
        cout<<"Osiagnieto limit kredytowy: "<<maxdebt <<"pln" <<endl;
        debt=maxdebt;
    }
    else
    {
        debt = debt + how_much;
        cout<<"Tranzakcje wykonano pomyslnie stan dlugu kredytowego po tranzakcji: "<<debt<<"pln"<<endl;
    }

}

void credit_card::deposit(int how_much)
{
        debt= debt - how_much;
        cout<<"Tranzakcje wykonano pomyslnie stan dlugu kredytowego po tranzakcji: "<<debt<<"pln"<<endl;
}