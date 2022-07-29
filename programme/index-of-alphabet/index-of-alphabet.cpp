// Write a programme to find index of an alphabet
#include <iostream>

using namespace std;

int findIndex(char input);

int findIndex(char input)
{
    int ascii_value = (int)input;
    if (ascii_value > 95)
        return (ascii_value - 96);
    else
        return (ascii_value - 64);
}

int main()
{
    cout << "Input  : ";
    char input;
    cin >> input;

    cout << "Output : " << findIndex(input) << endl;
}
