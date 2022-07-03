// Write a programme to print first n even numbers
#include <iostream>

int main(void)
{
    int n;
    std::cout << "Input  : ";
    std::cin >> n;
    std::cout << "Output : ";
    for (int i = 0; i < n - 1; i++)
    {
        std::cout << 2 * i << " ";
    }
    std::cout << 2 * (n - 1) << std::endl;
    return 0;
}