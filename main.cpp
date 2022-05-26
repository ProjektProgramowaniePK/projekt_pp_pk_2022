#include <iostream>
#include "Card.h"

using namespace std;

int main()
{
    payment_card payment_ca;
    credit_card credit_ca;

    card* wskcard{};               //koniecznosc zainicjowania wskaznika na klase bazowa

    wskcard = &payment_ca;          //wskazujemy wskaznikiem na klase pochodna
    wskcard->pay_out(100);

    wskcard = &payment_ca;
    wskcard->deposit(400);

    wskcard = &credit_ca;
    wskcard->deposit(100);

    wskcard = &credit_ca;
    wskcard->pay_out(100);

    wskcard = &payment_ca;
    wskcard->deposit(300);

    wskcard = &payment_ca;
    wskcard->pay_out(200);

    return 0;
}
