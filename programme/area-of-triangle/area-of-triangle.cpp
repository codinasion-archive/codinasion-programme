// Write a programme to find area of triangle
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    cout << "Enter c : ";
    cin >> c;

    float s = (float)(a + b + c) / 2;

    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "\ns : " << s << endl;
    cout << "\nArea : " << area << endl;

    return 0;
}
