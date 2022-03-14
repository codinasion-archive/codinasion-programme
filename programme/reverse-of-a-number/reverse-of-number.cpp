// Write a program to print the reverse of a number
#include <iostream>
using namespace std;

int main()
{
    int a, n;
    cout << "Input  : ";
    cin >> a;
    cout << "Output : ";
    while (a > 0)
    {
        n = a % 10;
        cout << n;
        a /= 10;
    }
    cout << endl;
    return 0;
}
