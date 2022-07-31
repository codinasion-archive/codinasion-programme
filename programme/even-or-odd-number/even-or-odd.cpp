// Write a programmeto check if a given number is even or odd
#include <iostream>

using namespace std;

int main()
{
    unsigned long long number;
    cout << "Input Number : ";
    cin >> number;

    cout << "\nNumber '" << number << "' is ";
    if (number % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    cout << '\n';
    return 0;
}
