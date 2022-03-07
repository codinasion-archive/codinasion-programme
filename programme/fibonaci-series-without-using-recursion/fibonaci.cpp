// Write a program to print Fibonacci series without recursion
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, i = 0, temp = 0, n = 0;
    cout << "Input  : ";
    cin >> n;
    cout << "Output : ";
    while (i != n)
    {
        cout << a << " ";
        temp = a;
        a = b;
        b = temp + b;
        i++;
    }
    cout << endl;
    return 0;
}
