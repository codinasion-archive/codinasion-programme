// Write a programme for Digital Root of a number
#include <iostream>

using namespace std;

int digital_root(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return 1 + ((n - 1) % 9);
    }
}

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    cout << endl;
    cout << "Digital Root Value : " << digital_root(n) << endl;
    return 0;
}
