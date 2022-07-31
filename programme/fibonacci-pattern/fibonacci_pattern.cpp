/* programme to print Fibonacci pattern using recursion.

Example:
Input: n = 5
Output:
1
1 1
1 1 2
1 1 2 3
1 1 2 3 5
*/

#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{

    int n;
    cout << "Enter an Integer : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << fib(j) << " ";
        }
        cout << "\n";
    }

    return 0;
}
