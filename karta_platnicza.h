#ifndef KARTA_PLATNICZA_H
#define KARTA_PLATNICZA_H

class karta                                     //klasa zawierajaca funkcje wirtualne jest klasa abstrakcyjna, nie posiadajac obiektu
{
    private:

        unsigned int id;
        double saldo;
    public:

        virtual void wyplac(int Ile)=0;         //funkcje wirtualne dajace polimorfizm
        virtual void wplac(int Ile)=0;
        //void przewalutuj();

};

class karta_platnicza: public karta{

private:

    double saldo=2500;                  //wartosc do testow, normalnie musi zostac pobrana z bazydanych, albo zostala juz pobrana i przyjaznia uzyskujemy dostep

public:
    void wyplac(int Ile);
    void wplac(int Ile);
};

class karta_kredytowa: public karta{

private:

    double dlug=5000;                   //iedntyczna sytuacja co w karcie platniczej
    double maxdlug=10000;

public:
    void wyplac(int Ile);
    void wplac(int Ile);
};
#endif // KARTA_PLATNICZA_H
