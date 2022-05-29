// Write a programme to calculate compound interest

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int P, T, R;
    cout << "Enter P : ";
    cin >> P;
    cout << "Enter T : ";
    cin >> T;
    cout << "Enter R : ";
    cin >> R;

    float A = pow((1.0 + (R * 1.0) / 100), (T * 1.0)) * P;
    cout << "\nAmount : " << A << endl;
    float C = A - P;
    cout << "Compound Interest : " << C << endl;
}
