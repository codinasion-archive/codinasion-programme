// Write a programmeto convert number to strings
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, n = 0;
    string word[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    cout << "Input  : ";
    cin >> a;
    string op = "";
    while (a > 0)
    {
        n = a % 10;
        op.insert(0, word[n]);
        op.insert(0, " ");
        a = a / 10;
    }
    cout << "Output :" << op << endl;
    return 0;
}
