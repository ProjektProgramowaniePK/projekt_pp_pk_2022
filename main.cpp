#include <iostream>
#include "Card.h"

using namespace std;

int main()
{
    payment_card payment_ca;
    credit_card credit_ca;

    card* wskcard{};               //koniecznosc zainicjowania wskaznika na klase bazowa

    wskcard = &payment_ca;          //wskazujemy wskaznikiem na klase pochodna
    wskcard->pay_out(1300);

    wskcard = &payment_ca;
    wskcard->deposit(486);

    wskcard = &credit_ca;
    wskcard->pay_out(10000);

    wskcard = &credit_ca;
    wskcard->deposit(64161);
    return 0;
}
