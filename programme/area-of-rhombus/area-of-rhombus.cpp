#include<iostream>
using namespace std;

int main(){
    double d1, d2;
    
    cout<<"Enter the length of diagonal 1: ";
    cin>>d1;
    cout<<"Enter the length of diagonal 2: ";
    cin>>d2;

    double area = (d1*d2)/2;
    cout<<"The area of the rhombus: "<<area;
    return 0;
}