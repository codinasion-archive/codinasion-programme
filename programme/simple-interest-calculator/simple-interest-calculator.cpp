// Write a programme to calculate simple interest
#include <iostream>

int simple_interest(int p, int t, int r)
{
    return (int)(p * t * r / 100);
}

int main(void)
{
    int p, t, r;
    std::cout << "Enter P : ";
    std::cin >> p;
    std::cout << "Enter R : ";
    std::cin >> r;
    std::cout << "Enter T : ";
    std::cin >> t;
    printf("\nSimple Interest : %d\n", simple_interest(p, t, r));
    return 0;
}
