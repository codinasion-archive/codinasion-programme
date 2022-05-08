#include<iostream>
using namespace std;

int main(){
    double len, wid;

    cout<<"Enter the length: ";
    cin>>len;
    cout<<"Enter the width: ";
    cin>>wid;

    double perimeter = 2*(len+wid);
    cout<<"Perimeter of the rectangle: "<<perimeter;
    return 0;
}