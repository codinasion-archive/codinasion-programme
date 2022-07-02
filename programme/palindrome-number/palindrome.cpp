// Write a program to check palindrome number
#include <iostream>
#include <cstring>

using namespace std;

string checkPalindrome(int a)
{
    int pal = 0, n;
    int original = a;
    while (a > 0)
    {
        n = a % 10;
        pal = pal * 10 + n;
        a = a / 10;
    }
    if (original == pal)
    {
        return "Palindrome number";
    }
    return "Not palindrome number";
}

int main()
{
    int num;
    cout << "Input  : ";
    cin >> num;
    cout << "Output : " << checkPalindrome(num) << endl;
    return 0;
}
