//
// Created by Jannik Loth on 05.06.23.
//

#include "Person.hpp"

// getMethod for name
const string &Person::getMName() const
{
    return m_name;
}

// getMethod for adress
const string &Person::getMAdress() const
{
    return m_adress;
}

// getMethod for email
const string &Person::getMEmail() const
{
    return m_email;
}

// method to get the type of a person
string Person::get_type() const
{
    return "Person";
}




