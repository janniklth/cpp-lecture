#include <iostream>



int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 2) + fib(n - 1);
    }
}

int main()
{
    // define some vars
    int n = 8;
    int result;

    // call the fibonacci function and print the result
    result = fib(n);
    std::cout << "The " << n << "th number of the fibonacci row is: " << result << std::endl;

    return 0;
}