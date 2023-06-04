#include <iostream>


int main()
{
    // define a var to store the user input and the result
    int n;
    int n_squared;

    // prompt the user to input a number and store it to n
    std::cout << "Please type a number: " << std::endl;
    std::cin >> n;

    // calculate the square and print it to the console
    n_squared = n * n;
    std::cout << "The squared result is lol: " << n_squared << std::endl;


    return 0;
}