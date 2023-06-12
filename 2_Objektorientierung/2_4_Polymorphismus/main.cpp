//
// Created by Jannik Loth on 12.06.23.
//



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


    // visit the place
    place1.visit();
    sights1.visit();
    toilets1.visit();


    return 0;
}