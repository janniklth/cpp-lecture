//
// Created by Jannik Loth on 16.06.23.
//

#ifndef CPP_LECTURE_KONTO_HPP
#define CPP_LECTURE_KONTO_HPP


#include <iostream>
#include <random>


using namespace std;


class Konto
{
public:
    // default constructor
    Konto()
            : m_bankIdentifierCode(000000)
            , m_accountNumber(000000)
    {};

    // overloaded constructor
    Konto(int bankIdentifierCode, double credit, double interestRate)
            : m_bankIdentifierCode(bankIdentifierCode)
            , m_credit(credit)
            , m_interestRate(interestRate)
            , m_accountNumber(generateAccountNumber())
    {};

    // destructor
    virtual ~Konto()
    = default;

    /// method to print all info about the Konto object
    virtual void printInfo() const;

    /// method to transaction and pay out money
    /// @param amount: amount of money to deposit, positive => transaction, negative => pay out
    virtual void transaction(double amount);


    /// method to generate random account number
    /// @return integer between 100000 and 999999
    int generateAccountNumber();

    // GetMethod to return actual credit
    const double getMCredit() const;

    // GetMethod to return the ID
    const int getMAccountNumber() const;




protected:
    const int m_accountNumber;
    const int m_bankIdentifierCode;
    double m_credit;
    double m_interestRate;
};


#endif //CPP_LECTURE_KONTO_HPP
