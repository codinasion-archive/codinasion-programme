// Write a programmeto convert the temperature from Celsius to Fahrenheit
#include <iostream>

using namespace std;

int main()
{

  float Fahrenheit; // initialize Fahrenheit
  float Celsius;    // initialize Celsius

  cout << "Enter the temperature in Celsius: ";
  cin >> Celsius;

  Fahrenheit = ((Celsius * 9.0) / 5.0) + 32;

  cout << "\nThe temperature in Celsius is: " << Celsius << endl;
  cout << "The temperature in Fahrenheit is: " << Fahrenheit << endl;
}
