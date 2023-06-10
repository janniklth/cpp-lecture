//
// Created by Jannik Loth on 10.06.23.
//

#ifndef CPP_LECTURE_PROFESSOR_HPP
#define CPP_LECTURE_PROFESSOR_HPP

#include "Person.hpp"

#include <string>


using namespace std;

class Professor : public Person
{
public:
    // Default Constructor
    Professor()
    {};

    // Overloaded Constructor
    Professor(string name, string adress, string email, string iban)
        :   Person(std::move(name), std::move(adress), std::move(email))
        ,   m_iban(std::move(iban))
    {};

    // Destructor
   ~Professor()
    {};

private:
    string m_iban;
};


#endif //CPP_LECTURE_PROFESSOR_HPP
