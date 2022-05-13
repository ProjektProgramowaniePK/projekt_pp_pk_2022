#include <iostream>
#include "karta_platnicza.h"

using namespace std;

int main()
{
    karta_platnicza karta_pla;
    karta_kredytowa karta_kr;

    karta* wskkart{};               //koniecznosc zainicjowania wskaznika na klase bazowa

    wskkart = &karta_pla;          //wskazujemy wskaznikiem na klase pochodna
    wskkart->wyplac(4866);

    wskkart = &karta_pla;
    wskkart->wplac(486);

    wskkart = &karta_kr;
    wskkart->wyplac(10000);

    wskkart = &karta_kr;
    wskkart->wplac(64161);
    return 0;
}
