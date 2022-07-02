// Write a programme to find the length of an array
#include <iostream>
#include <vector>

using namespace std;

template <typename T>

int array_size(vector<T> array)
{
    return array.size();
}

int main()
{
    // using 'sizeof' function
    int array[] = {0, 1, 2, 3, 4};
    int lenOfArray = sizeof(array) / sizeof(array[0]);
    cout << "Input  : [ ";
    for (int i = 0; i < lenOfArray; i++)
    {
        if (i == lenOfArray - 1)
        {
            cout << array[i] << " ";
        }
        else
        {
            cout << array[i] << ", ";
        }
    }
    cout << "]" << endl;
    cout << "Output : " << lenOfArray << endl;

    // using 'vector'
    vector<int> array1 = {1, 3, 5, 2, 3};
    int lenOfArray1 = array_size(array1);
    cout << "Input  : [ ";
    for (int i = 0; i < lenOfArray1; i++)
    {
        if (i == lenOfArray1 - 1)
        {
            cout << array1[i] << " ";
        }
        else
        {
            cout << array1[i] << ", ";
        }
    }
    cout << "]" << endl;
    cout << "Output : " << lenOfArray1 << endl;
}
