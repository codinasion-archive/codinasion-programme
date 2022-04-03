// Write a programme to check leap year
#include <bits/stdc++.h>

using namespace std;

int main()
{
  cout << "Input  : ";
  int year;
  cin >> year;
  cout << "Output : ";
  if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0))
    cout << "Leap Year\n";
  else
    cout << "Not a Leap Year\n";
}
