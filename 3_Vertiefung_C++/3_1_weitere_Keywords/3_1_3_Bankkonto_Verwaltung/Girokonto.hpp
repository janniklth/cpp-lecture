//
// Created by Jannik Loth on 21.06.23.
//

#ifndef CPP_LECTURE_GIROKONTO_HPP
#define CPP_LECTURE_GIROKONTO_HPP


#include "Konto.hpp"

using namespace std;

class Girokonto : public Konto
{
public:
    // default constructor
    Girokonto()
    {};

    // overloaded constructor
    Girokonto(int bankIdentifierCode, double credit, double interestRate, int dispo)
        : Konto(bankIdentifierCode, credit, interestRate)
        , m_dispo(dispo)
    {};

    // destructor
    ~Girokonto() override
    {}

    /// method to print all info about an object
    void printInfo() const override
    {
        cout << "- - - - - - - - - - - -" << endl;
        cout << "Konto: " << m_accountNumber << endl;
        cout << "BIC: " << m_bankIdentifierCode << endl;
        cout << "Kredit: " << m_credit << endl;
        cout << "Zinssatz: " << m_interestRate << endl;
        cout << "Kontotyp: Girokonto" << endl;
        cout << "- - - - - - - - - - - -\n" << endl;
    }

    /// method to transaction and pay out money, credit can get negative
    /// @param amount: amount of money to deposit, positive => transaction, negative => pay out
    void transaction(double amount) override
    {
        // check if there is enough money on the account
        if (Konto::getMCredit() + amount >= -m_dispo)
        {
            Konto::transaction(amount);
        }
        else
        {
            cout << "WARNING: accountNumber: " << Konto::generateAccountNumber() << " has not enough money available" << endl;
        }
    }

private:
    int m_dispo;
};


#endif //CPP_LECTURE_GIROKONTO_HPP
