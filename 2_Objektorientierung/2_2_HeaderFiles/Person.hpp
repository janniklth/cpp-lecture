#ifndef PERSON_HPP_INCLUDED
#define PERSON_HPP_INCLUDED

#include <string>

using namespace std;


enum class Nationality
{
    de,
    en,
    it,
    es
};

class Person
{
public:
    // Default constructor
    Person()
    {};

    // Overloaded constructor
    Person(string name, Nationality nationality)
        :   m_name(name)
        ,   m_nationality(nationality)
    {};

    // Destructor
    ~Person()
    {};

    // method to greet person in its language
    void greet(Person greetedPerson);

    // return name
    string getName();

    // return nationality
    Nationality getNationality();


private:
    string m_name;
    Nationality m_nationality;
};

#endif