#include <iostream>

using namespace std;

int main(){

    int base1, base2, height;

    cout << "Enter base1 : ";
    cin >> base1;

    cout << "Enter base2 : ";
    cin >> base2;

    cout << "Enter height : ";
    cin >> height;

    float area = (float)(base1 + base2) * height / 2;
    cout << "Area : " << area << endl;

    return 0;
}