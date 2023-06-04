//
// Created by Jannik Loth on 22.05.23.
//

#ifndef CODE_CPP_VEHICLE_HPP
#define CODE_CPP_VEHICLE_HPP

#include <utility>
#include <vector>
#include "Person.hpp"

using namespace std;


class Vehicle
{
public:
    // Default Constructor
    Vehicle()
    {};

    // Overloaded Constructor
    Vehicle(int number_of_seats, vector<Person> passengers)
            : m_number_of_seats(number_of_seats), m_passengers(std::move(passengers))
    {};

    // Overloaded Constructor
    Vehicle(int number_of_seats)
            : m_number_of_seats(number_of_seats)
    {};

    // Destructor
    ~Vehicle()
    {};

    // method to enter a vehicle
    void enter(Person person);

    // method to exit a vehicle
    void exit(int seatNumber);

    // method to print all passengers from a vehicle
    void printPassengers();

private:
    int m_number_of_seats;
    vector<Person> m_passengers;

};


#endif //CODE_CPP_VEHICLE_HPP
