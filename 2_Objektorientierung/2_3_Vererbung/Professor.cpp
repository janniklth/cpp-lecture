//
// Created by Jannik Loth on 10.06.23.
//

#include "Professor.hpp"

// getMethod for iban
const string &Professor::getMIban() const
{
    return m_iban;
}

// method to get the type of a person
string Professor::get_type() const
{
    return "Professor";
}
