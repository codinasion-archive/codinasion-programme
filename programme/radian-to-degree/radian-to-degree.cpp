// Write a programme to convert radians to degrees.
#include <iostream>

using namespace std;

int main()
{
    int radian;
    cout << "Radian  : ";
    cin >> radian;

    cout << "Degrees : " << radian * 180 / 3.141592653589793 << endl;

    return 0;
}
