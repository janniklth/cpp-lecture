#include "Person.hpp"

#include <iostream>
#include <string>

using namespace std;

// return name
string Person::getName()
{
    return m_name;
}

// return Nationality
Nationality Person::getNationality()
{
    return m_nationality;
}

// greet a person in its language
void Person::greet(Person greetedPerson)
{
    switch (greetedPerson.getNationality())
    {
    case Nationality::de:
        cout << "Grüß dich, " << greetedPerson.getName() << endl;
        break;
    case Nationality::en:
        cout << "Hello " << greetedPerson.getName() << endl;
        break;
    case Nationality::it:
        cout << "Buangiorno " << greetedPerson.getName() << endl;
        break;
    case Nationality::es:
        cout << "Hola " << greetedPerson.getName() << endl;
        break;

    default:
        break;
    }
}

