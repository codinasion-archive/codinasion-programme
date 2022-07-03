// Write a programme to find the area of circle
#include <bits/stdc++.h>

using namespace std;

#define pi 3.141

int main()
{
    int r;

    // input radius
    cout << "Enter radius: ";
    cin >> r;

    // output area
    cout << "Area: " << floor((pi * r * r) * 100) / 100;
}
