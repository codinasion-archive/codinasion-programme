// Write a program to find the Volume of a Cylinder

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float radius, height, volume;

    cout << "Enter Radius of Cylinder : ";
    cin >> radius;
    cout << "Enter Height of Cylinder : ";
    cin >> height;

    // value of PI is defined in M_PI in math.h
    volume = M_PI * radius * radius * height;

    cout << endl
         << "Volume of Cylinder is : " << volume << endl;

    return 0;
}
