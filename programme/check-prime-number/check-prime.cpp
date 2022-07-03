// Write a program to check prime number
#include <iostream>

using namespace std;
int main()
{
    int a, b = 0;
    cout << "Input  : ";
    cin >> a;
    cout << "Output : ";
    if (a == 0 || a == 1)
    {
        cout << "Not prime number\n";
    }
    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                b = 1;
                break;
            }
        }
        if (b == 1)
        {
            cout << "Not prime number\n";
        }
        else
        {
            cout << "Prime number\n";
        }
    }
    return 0;
}
