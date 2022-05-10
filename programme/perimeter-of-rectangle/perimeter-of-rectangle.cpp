// Write a programme to find perimeter of rectangle

#include <iostream>
using namespace std;

int main()
{
    double len, wid;

    cout << "Enter the length : ";
    cin >> len;
    cout << "Enter the width  : ";
    cin >> wid;

    double perimeter = 2 * (len + wid);
    cout << "\nPerimeter of the rectangle: " << perimeter << endl;
    return 0;
}
