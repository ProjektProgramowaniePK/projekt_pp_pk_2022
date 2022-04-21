#ifndef KARTA_PLATNICZA_H
#define KARTA_PLATNICZA_H


class karta_platnicza
{
    private:
        int nr_karty;
        string imie;
        string nazwisko;
        int nr_konta;
        char rodzaj_karty;
        double stan_konta;
        char waluta;

        void wyplac();
        void przelej();
        void przewalutuj();

};

#endif // KARTA_PLATNICZA_H
