// Write a program to output the following multiplication table

#include <iostream>

int main()
{
    int n;
    std::cout << "Enter number to find its table : ";
    std::cin >> n;
    for (int i = 1; i < 11; i++)
    {
        std::cout << n << " x " << i << " = " << n * i << "\n";
    }
}
