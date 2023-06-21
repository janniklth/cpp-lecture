//
// Created by Jannik Loth on 16.06.23.
//



#include "Konto.hpp"
#include "Girokonto.hpp"

// main function
int main() {

    // initialize a some Konto objects
    Konto konto1(12345678, 1000, 0.01);
    Konto konto2(87654321, 1000, 0.01);

    // initialise some Girokonto objects
    Girokonto giro1(92845392, 1000, 0.01, 1000);
    Girokonto giro2(20491037, 2000, 0.01, 5000);



    // print info about the Konto objects
    konto1.printInfo();
    konto2.printInfo();
    giro1.printInfo();
    giro2.printInfo();

    // transaction and pay out money
    konto1.transaction(10);
    konto2.transaction(-10);
    giro1.transaction(-3000);
    giro2.transaction(-4000);


    // print info about the Konto objects
    konto1.printInfo();
    konto2.printInfo();
    giro1.printInfo();
    giro2.printInfo();

    return 0;
}

