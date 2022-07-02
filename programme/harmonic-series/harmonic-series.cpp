// Write a programme to calculate the sum of following
// harmonic series for a given value of n
#include <iostream>

int main(void)
{
    int n;
    double sum = 0;
    std::cout << "Input  : ";
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += (1.0 / i);
    }
    std::cout << "Output : " << sum << std::endl;
    return 0;
}
