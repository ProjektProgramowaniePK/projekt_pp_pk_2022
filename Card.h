#ifndef CARD_H
#define CARD_H


class card                                     //klasa zawierajaca funkcje wirtualne jest klasa abstrakcyjna, nie posiadajac obiektu
{
    private:
        double balance;
    public:

        virtual void pay_out(int how_much)=0;         //funkcje wirtualne dajace polimorfizm
        virtual void deposit(int how_much)=0;

};

class payment_card: public card{

private:

    double balance;

public:
    payment_card();
    void pay_out(int how_much);
    void deposit(int how_much);
};

class credit_card: public card{

private:

    double balance;
    double maxdebt;

public:

    credit_card();
    void pay_out(int how_much);
    void deposit(int how_much);
};

#endif // CARD_H
