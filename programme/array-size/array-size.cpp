// write a program to get length of int array

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {4, 1, 8, 2, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "Array : { ";
    for (int i = 0; i < len; i++)
    {
        if (i == len - 1)
        {
            cout << arr[i] << " }" << endl;
        }
        else
        {
            cout << arr[i] << ", ";
        }
    }

    cout << "\nArray length : " << len << endl;
    return 0;
}
