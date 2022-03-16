#include<iostream>
using namespace std;

int main(){
    double base, height;

    //input base
    cout << "Base  : ";
    cin >> base;

    //input height
    cout << "height : ";
    cin >> height;

    //calculate area
    double area = 0.5 * base * height;
    
    //print area
    cout << "area : " << area;
}