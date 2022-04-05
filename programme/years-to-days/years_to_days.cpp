#include <iostream>

int main() {
    unsigned years, days;
    
    std::cout << "Years: " << std::flush;
    std::cin >> years;

    days = years * 365;
    std::cout << "Days: " << days << std::endl;
}