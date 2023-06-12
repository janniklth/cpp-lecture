//
// Created by Jannik Loth on 12.06.23.
//

#include <iostream>
#include "Sights.hpp"

using namespace std;

// override method for visiting a place
void Sights::visit() const
{
    Place::visit();
    cout << " -> description: " << this->getMDescription() << endl;
}

// getMethod for description
const string &Sights::getMDescription() const
{
    return m_description;
}
