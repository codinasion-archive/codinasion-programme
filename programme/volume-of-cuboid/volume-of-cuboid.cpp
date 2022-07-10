// Write a programme to find volume of a cuboid

#include <iostream>
using namespace std;

int main()
{
    int l, w, h, Vol;

    // Input
    cout << "Enter length : ";
    cin >> l;
    cout << "Enter width  : ";
    cin >> w;
    cout << "Enter height : ";
    cin >> h;

    // Calculate and print volume
    Vol = l * w * h;
    cout << "\nVolume of Cuboid : " << Vol << endl;

    return 0;
}
