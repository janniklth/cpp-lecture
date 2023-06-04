//
// Created by Jannik Loth on 05.06.23.
//

#ifndef CPP_LECTURE_PERSON_HPP
#define CPP_LECTURE_PERSON_HPP

#include <string>

using namespace std;

class Person
{
public:
    // Default Constructor
    Person()
    {};

    // Overloaded Constructor
    Person(string name, string adress, string email)
        :   m_name(name)
        ,   m_adress(adress)
        ,   m_email(email)
    {};

    // Destructor
    ~Person()
    {};

private:
    string m_name;
    string m_adress;
    string m_email;
};


#endif //CPP_LECTURE_PERSON_HPP
