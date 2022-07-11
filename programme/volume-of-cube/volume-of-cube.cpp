// Write a programme to find volume of a cube
#include <iostream>

using namespace std;

int Vol_cube(int s)
{
    int Vol = s * s * s;
    return Vol;
}

int main()
{
    int side;
    cout << "Enter cube side : ";
    cin >> side;

    cout << "\nVolume of cube  : " << Vol_cube(side) << endl;

    return 0;
}
