//C++ program to get length of int array

#include <iostream>
using namespace std;
int main() {
   int arr[5] = {4, 1, 8, 2, 9};
   int len = sizeof(arr)/sizeof(arr[0]);
   cout << "The length of the array is: " << len;
   return 0;
}
