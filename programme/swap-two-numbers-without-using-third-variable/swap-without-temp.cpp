// Write a programme to swap two numbers without using third variable
#include <iostream>

void swap(int &x, int &y)
{
  x = x + y;
  y = x - y;
  x = x - y;
}

int main()
{
  int a, b;
  std::cout << "a : ";
  std::cin >> a;
  std::cout << "b : ";
  std::cin >> b;

  swap(a, b);

  std::cout << "\na = " << a << "\nb = " << b << "\n";

  return 0;
}
