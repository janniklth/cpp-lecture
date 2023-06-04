#include <iostream>

int main()
{
    // define some vars
    int n = 5;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    std::cout << "The sum for " << n << " is: " << sum << std::endl;

    return 0;
}