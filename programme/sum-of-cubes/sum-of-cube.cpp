// Write a programme to find sum of cubes of first n natural numbers.
#include <iostream>

using namespace std;

int main()
{
    int a, total = 0;
    cout << "Input : ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        total += (i * i * i);
    }
    cout << "Output : " << total << endl;
    return 0;
}