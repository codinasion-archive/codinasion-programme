// Fibonacci Series using recursion in C++
#include <iostream>
#include <map>

// Big O - Time and Space Complexity
// O(n) Time (because of the cache, otherwise time complexity would be O(2^n)
// O(n) Space

// Find the N-th Fibonacci number
static unsigned long int fib(unsigned int n)
{
  // Cache with all the N values already calculated
  static std::map<unsigned int, unsigned long int> cache = {{0, 0}, {1, 1}};

  // Return fib(0) = 0
  if (n == 0)
    return 0;
  // Return fib(1) = 1
  if (n == 1)
    return 1;
  // Return known fib(n) to avoid extra recursive steps
  if (cache.count(n) > 0)
    return cache.at(n);

  // Save the new fib(n) into the map
  cache.insert({n, fib(n - 1) + fib(n - 2)});

  // Return the fib(n)
  return fib(n - 1) + fib(n - 2);
}

int main()
{
  unsigned int n;
  std::cout << "Choose how many N fibonacci numbers you would like to see: ";
  std::cin >> n;

  for (unsigned int pos = 0; pos < n; pos++)
  {
    std::cout << fib(pos) << " ";
  }
  std::cout << std::endl;
  return 0;
}
