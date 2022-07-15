// Write a program to count capital letters in a string
#include <iostream>

using namespace std;

int main()
{
    string ask;
    cout << "Input  : ";
    cin >> ask;
    cout << "Output : ";
    int count = 0, c;
    for (auto i : ask)
    {
        c = i;
        if (c >= 65 && c <= 90)
            count++;
    }
    cout << count << endl;
    return 0;
}
