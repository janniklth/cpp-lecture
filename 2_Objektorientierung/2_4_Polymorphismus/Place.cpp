//
// Created by Jannik Loth on 12.06.23.
//

#include "Place.hpp"

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

}
