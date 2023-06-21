//
// Created by Jannik Loth on 14.06.23.
//


#include "User.hpp"



// main function
int main()
{
    // initialise some user objects
    User user1("Jannik");
    User user2("Max");
    User user3("Moritz");
    User user4("Hans");

    // print all IDs
    user1.printId();
    user2.printId();
    user3.printId();
    user4.printId();

    return 0;
}