// Write a program to find the length of a string
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  // string variable
  string str;

  // input
  cout << "Please enter a string : ";
  getline(cin, str);

  // output
  cout << "Length of string is : " << str.size() << endl;

  return 0;
}
