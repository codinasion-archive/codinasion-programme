/*
Description:
    Write a programme to find volume of cone
    Volume of cone = 1/3 * π * (radius)^2 * height

Name: Krish Shah
*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double vol_cone(double radius, double height) {
    return 1.0/3 * M_PI * pow(radius, 2) * height;
}

int main() {
    double radius, height;

    cout << "radius: ";
    cin >> radius;

    cout << "height: ";
    cin >> height;

    cout << setprecision(7) << "\nvolume: " << vol_cone(radius, height);

    return 0;
}
