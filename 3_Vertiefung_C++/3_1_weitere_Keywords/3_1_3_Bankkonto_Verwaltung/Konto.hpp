//
// Created by Jannik Loth on 16.06.23.
//

#ifndef CPP_LECTURE_KONTO_HPP
#define CPP_LECTURE_KONTO_HPP


#include <iostream>
#include <random>


using namespace std;

// enum for the different account types
enum class AccountType
{
    Girokonto,
    Tagesgeldkonto,
    Bausparvertrag
};


class Konto
{
public:
    // default constructor
    Konto(int bankIdentifierCode)
            : m_bankIdentifierCode(bankIdentifierCode)
    {};

    // overloaded constructor
    Konto(int bankIdentifierCode, double credit, double interestRate)
            : m_accountType(AccountType::Girokonto)
            , m_bankIdentifierCode(bankIdentifierCode)
            , m_credit(credit)
            , m_interestRate(interestRate)
    {
        random_device device;
        mt19937 generator(device());
        uniform_int_distribution<int> distribution(100000, 999999);
        m_accountNumber = distribution(generator);
    };

    // destructor
    ~Konto()
    = default;;

    /// method to print all info about the Konto object
    void printInfo() const;

    /// method to transaction and pay out money
    /// @param amount: amount of money to deposit, positive => transaction, negative => pay out
    void transaction(double amount);


    /// method to convert the account type to a string
    /// @param accountType: account type to convert
    /// @return string of the account type
    static string accountTypeToString(AccountType accountType);


private:
    int m_accountNumber;
    AccountType m_accountType;
    const int m_bankIdentifierCode;
    double m_credit;
    double m_interestRate;

};


#endif //CPP_LECTURE_KONTO_HPP
