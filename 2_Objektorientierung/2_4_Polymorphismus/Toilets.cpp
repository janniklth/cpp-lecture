//
// Created by Jannik Loth on 12.06.23.
//

#include <iostream>
#include "Toilets.hpp"

using namespace std;

// override method for visiting a place
void Toilets::visit() const
{
    Place::visit();
    cout << " -> smell: " << this->getMSmell() << endl;
}

// getMethod for description
const string &Toilets::getMSmell() const
{
    return m_smell;
}