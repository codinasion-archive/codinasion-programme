// Write a program to print the minimum of given numbers
#include <iostream>
#include <limits>

int main()
{
    // Initializes as minimum value of int
    int max = std::numeric_limits<int>::min();
    unsigned int count = 0;
    std::cout << "Enter amount of numbers : ";
    std::cin >> count;

    while (count > 0)
    {
        int n = 0;
        std::cout << "Enter number : ";
        std::cin >> n;

        if (n > max)
        {
            max = n;
        }

        --count;
    }

    std::cout << "\nMaximum : " << max << "\n";

    return 0;
}
