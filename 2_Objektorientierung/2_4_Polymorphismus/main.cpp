//
// Created by Jannik Loth on 12.06.23.
//



#include <vector>
#include "Place.hpp"
#include "Sights.hpp"
#include "Toilets.hpp"

// main function
int main()
{
    // initialise some places, sights and toilets
    Place place1("Cafe", {2, 4});
    Sights sights1("Eifel Tower", {3, 5}, "All of Paris");
    Toilets toilets1("devils toilet", {4, 1}, "sulfur");

    // store all places in a vector
    vector<Place*> places;
    places.push_back(&place1);
    places.push_back(&sights1);
    places.push_back(&toilets1);

    // iterate over all places and visit them
    for(Place* place : places)
    {
        place->visit();
    }


    return 0;
}