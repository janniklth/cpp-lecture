//
// Created by Jannik Loth on 05.06.23.
//

#ifndef CPP_LECTURE_PERSON_HPP
#define CPP_LECTURE_PERSON_HPP

#include <string>
#include <utility>

using namespace std;

class Person
{
public:
    // Default Constructor
    Person()
    {};

    // Overloaded Constructor
    Person(string name, string adress, string email)
        :   m_name(std::move(name))
        ,   m_adress(std::move(adress))
        ,   m_email(std::move(email))
    {}

    // Destructor
    virtual ~Person()
    = default;;

    // getMethod for name
    const string &getMName() const;

    // get method for adress
    const string &getMAdress() const;

    // get method for email
    const string &getMEmail() const;

    // method to get the type/role of a person
    virtual string get_type() const;


protected:
    string m_name;
    string m_adress;
    string m_email;
};


#endif //CPP_LECTURE_PERSON_HPP
