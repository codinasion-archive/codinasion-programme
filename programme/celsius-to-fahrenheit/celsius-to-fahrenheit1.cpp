// Write a program to convert celsius to fahrenheit

#include <iostream>
using namespace std;
int main()
{
  float celsius, fahrenheit;
  cout << "Input ( C )  : ";
  cin >> celsius;
  fahrenheit = (celsius * 1.8) + 32;
  cout << "\nOutput ( F ) : " << fahrenheit;
  cout << endl;
  return 0;
}
