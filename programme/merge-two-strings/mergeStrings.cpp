// Write a programme to merge two strings
#include <iostream>

using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter String 1 : ";
    cin >> str1;
    cout << "Enter String 2 : ";
    cin >> str2;

    string mergedString = str1 + str2;
    cout << "\nMerged String : " << mergedString << endl;
    return 0;
}
