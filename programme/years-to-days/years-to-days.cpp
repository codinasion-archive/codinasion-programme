// Write a programme to convert years to days

#include <iostream>

int main(void)
{
    double years;
    std::cout << "Years : ";
    std::cin >> years;
    std::cout << "Days  : " << (int)(years * 365) << std::endl;
    return 0;
}