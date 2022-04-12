// Write a programme to find perimeter of square
#include <iostream>
// this namespace function allows you to skip
// over the "std::".
using namespace std;

int main()
{
    // set up the variables for the two values
    int side;
    int perimeter;

    // getting the user input for the size of their side
    cout << "Side : ";
    cin >> side;

    // calculating the perimeter
    perimeter = side * 4;

    // printing out the result
    cout << "Perimeter : " << perimeter << endl;
}
