//
// Created by Jannik Loth on 16.06.23.
//



#include "Konto.hpp"

// main function
int main() {

    // initialize a some Konto objects
    Konto konto1(12345678, 12345678, 1000, 0.01);
    Konto konto2(87654321, 87654321, 1000, 0.01);


    // print info about the Konto objects
    konto1.printInfo();
    konto2.printInfo();

    return 0;
}

