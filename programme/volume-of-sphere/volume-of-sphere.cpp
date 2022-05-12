#include<iostream>
using namespace std;

int main(){
    double radius;
    cout << "Enter the radius: " << endl;
    cin >> radius;
    double area = (4/3) * 3.141 * radius * radius * radius;
    cout << "The volume of the sphere: " << area << endl;
    return 0;
}