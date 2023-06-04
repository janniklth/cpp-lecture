#include <iostream>

// function to determine if the given number is a prime number or not
bool is_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}


// main function
int main()
{
    // define a var to store the number
    int n = 11;

    // check if the number is a prime number and print out the result
    if (is_prime(n) == true)
    {
        std::cout << "The number " << n << " is a prime number" << std::endl;
    }
    else {
        std::cout << "The number " << n << " is not a prime number" << std::endl;
    }

    return 0;
}