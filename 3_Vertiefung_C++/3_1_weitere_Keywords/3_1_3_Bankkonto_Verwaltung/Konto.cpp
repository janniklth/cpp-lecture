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
