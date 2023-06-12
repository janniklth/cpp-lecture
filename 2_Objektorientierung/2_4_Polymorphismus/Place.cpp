//
// Created by Jannik Loth on 12.06.23.
//

#include <iostream>
#include "Place.hpp"

using namespace std;

// getMethod -> returns the coordinates
const coordinate &Place::getMCoordinates() const
{
    return m_coordinates;
}

// getMethod -> returns the name
const string &Place::getMName() const
{
    return m_name;
}

// method to visit a place (to be overwritten) -> print some info
void Place::visit() const
{
    // print out the name and coordinates
    cout << "Visiting " << this->getMName() << endl;
    cout << " -> coordinates: (" << this->getMCoordinates().x << ", " << this->getMCoordinates().y << ")"
         << endl;
}
