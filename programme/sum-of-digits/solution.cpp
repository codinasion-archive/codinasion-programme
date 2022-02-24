// Write a program to print sum of digits.
#include <iostream>
using namespace std;

int main()
{
    int num, d, sum = 0;
    cout << "Enter a number : ";
    cin >> num;

    while (num != 0)
    {
        d = num % 10;
        sum = sum + d;
        num = num / 10;
    }

    cout << "The sum of the digits of the number: " << sum << endl;
}