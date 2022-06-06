// Write a program to check armstrong number

#include <iostream>
#include <cmath>

bool isArmstrongNumber(int n)
{
    int cache = n;
    int length = log10(n) + 1;
    int asum = 0;
    for (int i = 0; i < length; i++)
    {
        asum += pow(n % 10, length);
        n = n / 10;
    }
    return cache == asum;
}

int main(void)
{
    int n;
    std::cout << "Input  : ";
    std::cin >> n;
    if (isArmstrongNumber(n))
    {
        std::cout << "Output : Amstrong number" << std::endl;
    }
    else
    {
        std::cout << "Output : Not a armstrong number" << std::endl;
    }
    return 0;
}
