#ifndef CARD_H
#define CARD_H


class card                                     //klasa zawierajaca funkcje wirtualne jest klasa abstrakcyjna, nie posiadajac obiektu
{
    private:

        unsigned int id;
        double balance;
    public:

        virtual void pay_out(int how_much)=0;         //funkcje wirtualne dajace polimorfizm
        virtual void deposit(int how_much)=0;
        //void przewalutuj();

};

class payment_card: public card{

private:

    double balance=1200;                  //wartosc do testow, normalnie musi zostac pobrana z bazydanych, albo zostala juz pobrana i przyjaznia uzyskujemy dostep

public:

    void pay_out(int how_much);
    void deposit(int how_much);
};

class credit_card: public card{

private:

    double debt=5000;                   //iedntyczna sytuacja co w karcie platniczej
    double maxdebt=10000;

public:

    void pay_out(int how_much);
    void deposit(int how_much);
};

#endif // CARD_H