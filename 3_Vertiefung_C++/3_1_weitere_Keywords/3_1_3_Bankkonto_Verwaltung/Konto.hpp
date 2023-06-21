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
    Konto()
            : m_bankIdentifierCode(000000)
            , m_accountNumber(000000)
    {};

    // overloaded constructor
    Konto(int bankIdentifierCode, double credit, double interestRate)
            : m_accountType(AccountType::Girokonto)
            , m_bankIdentifierCode(bankIdentifierCode)
            , m_credit(credit)
            , m_interestRate(interestRate)
            , m_accountNumber(generateAccountNumber())
    {};

    // destructor
    ~Konto()
    = default;

    /// method to print all info about the Konto object
    void printInfo() const;

    /// method to transaction and pay out money
    /// @param amount: amount of money to deposit, positive => transaction, negative => pay o
    void transaction(double amount);


    /// method to convert the account type to a string
    /// @param accountType: account type to convert
    /// @return string of the account type
    static string accountTypeToString(AccountType accountType);

    /// method to generate random account number
    /// @return integer between 100000 and 999999
    int generateAccountNumber();


private:
    const int m_accountNumber;
    AccountType m_accountType;
    const int m_bankIdentifierCode;
    double m_credit;
    double m_interestRate;
};


#endif //CPP_LECTURE_KONTO_HPP
