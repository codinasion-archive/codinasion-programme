// Write a programme to compute the area of a rhombus
#include <iostream>

using namespace std;

int main()
{
    double d1, d2;

    cout << "Enter the length of diagonal 1 : ";
    cin >> d1;
    cout << "Enter the length of diagonal 2 : ";
    cin >> d2;

    double area = (d1 * d2) / 2;
    cout << "\nThe area of the rhombus : " << area << endl;
    return 0;
}
