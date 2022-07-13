// Program to convert from degree to radiant
#include <iostream>
#include <string>
// Math library for constant such as PI
#include <cmath>

using namespace std;

int main()
{
    int deg;
    float conversion;
    cout << "Write down the degree value you want to convert : ";
    cin >> deg;

    // M_Pi = pi constant obtained bia cmath.
    conversion = deg * (M_PI / 180);
    cout << "\nConversion : " << conversion << endl;

    return 0;
}
