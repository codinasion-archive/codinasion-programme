// Write a programme to print the minimum of given numbers
#include <iostream>
#include <limits>

int main()
{
  int min = std::numeric_limits<int>::max(); // Initializes as maximum value of int.
  unsigned int count = 0;
  std::cout << "Enter amount of numbers : ";
  std::cin >> count;

  while (count > 0)
  {
    int n = 0;
    std::cout << "Enter number : ";
    std::cin >> n;

    if (n < min)
    {
      min = n;
    }

    --count;
  }

  std::cout << "\nMinimum : " << min << "\n";

  return 0;
}
