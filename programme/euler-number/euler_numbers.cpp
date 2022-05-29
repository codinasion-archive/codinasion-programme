// Write a programme to compute the value of Euler's Number

#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Enter N : ";
    cin >> N;
    float eNumber = 1, fact = 1;
    for (int i = 1; i <= N; i++)
    {
        fact = fact * i;
        eNumber += (1.0 / fact);
    }
    cout << "Euler Number of " << N << " : " << eNumber << endl;
}
