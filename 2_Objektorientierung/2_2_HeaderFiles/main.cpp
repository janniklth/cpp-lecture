#include <iostream>

// include header files
#include "Person.hpp"
#include "Vehicle.hpp"

int main()
{
    // initialize some persons
    Person person1("Hans", Nationality::de);
    Person person2("Carlos", Nationality::es);
    Person person3("Boris", Nationality::en);
    Person person4("Francesco", Nationality::it);

    // greet some persons
    person1.greet(person2);
    person2.greet(person1);


    // initialize some vehicles
    Vehicle motorbike(2);
    Vehicle car(4);

    // enter the vehicles
    motorbike.enter(person1);
    motorbike.enter(person2);
    motorbike.enter(person3);

    motorbike.printPassengers();

    // exit the vehicle
    motorbike.exit(1);

    motorbike.printPassengers();
    motorbike.exit(1);

    return 0;
}