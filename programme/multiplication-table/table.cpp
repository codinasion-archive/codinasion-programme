// Write a programme to output the multiplication table
#include <iostream>

using namespace std;

int main()
{
    int n = 5, i;
    cout << "The multiplication table for " << n << " is as follows:" << endl;
    for (i = 1; i <= 10; i++)
        cout << n << " * " << i << " = " << n * i << endl;
    return 0;
}
