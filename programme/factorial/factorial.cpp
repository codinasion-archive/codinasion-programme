// Write a program to find the factorial of a number

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Input : ";
    cin >> number;
    int factorial_of_number = 1;
    for (int i = 1; i <= number; i++)
    {
        factorial_of_number = factorial_of_number * i;
    }
    cout << "\nFactorial of " << number << " is " << factorial_of_number << endl;
    return 0;
}
