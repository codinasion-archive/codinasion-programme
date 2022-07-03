// Write a C++ programme to convert hours to seconds.
#include <iostream>

using namespace std;

int main()
{
  double input;
  cout << "Hours   : ";
  cin >> input;
  double seconds = input * 3600;

  cout << "Seconds : " << seconds << endl;
  return 0;
}
