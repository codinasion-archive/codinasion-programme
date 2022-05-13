// Write a program to compute the volume of a Sphere

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double radius;
    cout << "Enter the radius : ";
    cin >> radius;
    double area = (4 / 3.0) * M_PI * radius * radius * radius;
    cout << "\nThe volume of the sphere: " << area << endl;
    return 0;
}
