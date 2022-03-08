// Write a program to convert rupee to paise
#include <iostream>
using namespace std;
int main() {
	double paise, rupees;
	cout<< "Please enter desired rupee amount for paise conversion: ";
	cin >> rupees;
	paise = rupees * 100; // paise calculation

	cout << "\nTotal Rupees = " << rupees << " rupees" << endl;
	cout << "\nTotal Paise = " << paise << " paise" << endl;
    return 0;
}