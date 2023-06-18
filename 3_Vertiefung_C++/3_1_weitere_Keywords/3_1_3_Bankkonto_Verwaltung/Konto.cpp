//
// Created by Jannik Loth on 16.06.23.
//

#include "Konto.hpp"

// method to print all info about the Konto object
void Konto::printInfo() const
{
    cout << "- - - - - - - - - - - -" << endl;
    cout << "Konto: " << m_accountNumber << endl;
    cout << "Kontotyp: " << Konto::accountTypeToString(m_accountType) << endl;
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

// method to convert account type to string
string Konto::accountTypeToString(AccountType accountType)
{
    switch (accountType) {
        case AccountType::Girokonto:
            return "Girokonto";
        case AccountType::Tagesgeldkonto:
            return "Tagesgeldkonto";
        case AccountType::Bausparvertrag:
            return "Bausparvertrag";
        default:
            throw runtime_error("Unknown account type");
    }
}
