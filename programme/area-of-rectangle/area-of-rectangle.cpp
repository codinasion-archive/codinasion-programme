// Write a programme to find the area of Rectangular
#include <bits/stdc++.h>
using namespace std;

int main()
{
  double length, width;

  // input sides
  cout << "Enter length : ";
  cin >> length;

  cout << "Enter breadth : ";
  cin >> width;

  double result = length * width;
  // output area
  cout << "\nArea of rectangle : " << result << endl;

  return 0;
}
