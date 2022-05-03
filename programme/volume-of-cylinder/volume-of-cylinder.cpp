// Write a program to find the Volume of a Cylinder. 

#include<iostream>
using namespace std;

int main()
{
	float radius, height, volume;

	cout << "Enter Radius of Cylinder : ";
	cin >> radius;
	cout << "Enter Height of Cylinder :";
	cin >> height;

	volume = 3.14 * radius * radius * height;

	cout << "Radius: " << radius << endl;
	cout << "Height: " << height << endl;
	cout << "Volume of Cylinder is : " << volume;

	return 0;
}