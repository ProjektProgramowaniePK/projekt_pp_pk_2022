#include "Card.h"
#include "iostream"
using namespace std;

payment_card::payment_card()        //konstruktor karty platniczej
{
    balance=4500;
}

credit_card::credit_card()          //konstruktor karty kredytowej
    {
        balance=4500;
        maxdebt=10000;
    }

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
    if ( (maxdebt + balance) - how_much <= 0)
    {
        cout<<"Osiagnieto limit kredytowy, nie mozna wyplacic wiecej pieniedzy " <<endl;

    }
    else
    {
        balance = balance - how_much;
        cout<<"Tranzakcje wykonano pomyslnie stan konta po tranzakcji: "<<balance + maxdebt<<"pln"<<endl;
    }

}

void credit_card::deposit(int how_much)
{
        balance = balance + how_much;
        cout<<"Tranzakcje wykonano pomyslnie stan konta po tranzakcji: "<<balance + maxdebt<<"pln"<<endl;
}
