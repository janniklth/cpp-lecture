//
// Created by Jannik Loth on 16.06.23.
//

#include "Konto.hpp"

// method to print all info about the Konto object
void Konto::printInfo() const
{
    cout << "- - - - - - - - - - - -" << endl;
    cout << "Konto: " << m_accountNumber << endl;
    cout << "BIC: " << m_bankIdentifierCode << endl;
    cout << "Kredit: " << m_credit << endl;
    cout << "Zinssatz: " << m_interestRate << endl;
    cout << "- - - - - - - - - - - -\n" << endl;
}

// method to transaction and pay out money
void Konto::transaction(double amount)
{
    m_credit += amount;
}

// method to generate random account number
int Konto::generateAccountNumber()
{
    random_device device;
    mt19937 generator(device());
    uniform_int_distribution<int> distribution(100000, 999999);
    return distribution(generator);
}
// method to return actual credit
const double Konto::getMCredit() const
{
    return m_credit;
}

// method to return the accoutn number
const int Konto::getMAccountNumber() const
{
    return m_accountNumber;
}
