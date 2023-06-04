//
// Created by Jannik Loth on 22.05.23.
//

#include <iostream>
#include "Vehicle.hpp"


using namespace std;

// add the person to the container if it has free seats
void Vehicle::enter(Person person)
{
    if (m_passengers.size() < m_number_of_seats) {
        m_passengers.push_back(person);
        cout << person.getName() << " entered the vehicle, there a now " << m_passengers.size()
             << " person(s) in the vehicle" << endl;
    } else {
        cout << person.getName() << " cannot enter, no free seats" << endl;
    }

}

// exit/erase person from given seat number, if there is a person
void Vehicle::exit(int seatNumber)
{
    if (m_passengers.size() - 1 >= seatNumber)
    {
        cout << m_passengers[seatNumber].getName() << " left the vehicle" << endl;

        m_passengers.erase(m_passengers.begin() + seatNumber);
    }
    else
    {
        cout << "Error, there is no person on this seat" << endl;
    }
}

// print all passengers/persons who are in the vehicle
void Vehicle::printPassengers()
{
    cout << "Passengers in the vehicle: " << endl;
    for(Person person : m_passengers)
    {
        cout << " - " << person.getName() << endl;
    }
}



