// Write a programme to compute the area of a right angle triangle
#include <iostream>

using namespace std;

int main()
{
    double base, height;

    // input base
    cout << "base : ";
    cin >> base;

    // input height
    cout << "height : ";
    cin >> height;

    // calculate area
    double area = 0.5 * base * height;

    // print area
    cout << "\narea : " << area << endl;
}
