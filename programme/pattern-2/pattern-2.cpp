// Write a programme to print the given pattern
#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = n - 1; j > i - 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int a;
    cout << "Input : ";
    cin >> a;
    pattern(a);
    return 0;
}
