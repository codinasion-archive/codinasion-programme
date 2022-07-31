// Write a programmeto convert rupee to paise
#include <iostream>

using namespace std;

int main()
{
    double paise, rupees;
    cout << "Please enter desired rupee amount for paise conversion : ";
    cin >> rupees;
    paise = rupees * 100; // paise calculation

    cout << "\nTotal Rupees : " << rupees << " rupees" << endl;
    cout << "Total Paise  : " << paise << " paise" << endl;
    return 0;
}
