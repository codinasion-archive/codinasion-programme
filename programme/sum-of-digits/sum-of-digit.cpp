// Write a programme to print sum of digits.
#include <iostream>

using namespace std;

int main()
{
    int num, d, sum = 0;
    cout << "Enter number : ";
    cin >> num;

    while (num != 0)
    {
        d = num % 10;
        sum = sum + d;
        num = num / 10;
    }

    cout << "Sum of digits : " << sum << endl;
}