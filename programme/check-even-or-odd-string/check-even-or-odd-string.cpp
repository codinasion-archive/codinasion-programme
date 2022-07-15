// Write a programme to check even or odd string
#include <iostream>

using namespace std;

int main()
{
    string ask;
    cout << "Input  : ";
    cin >> ask;
    cout << "Output : ";
    if (ask.length() & 1)
        cout << "Odd String "
             << "\n";
    else
        cout << "Even String"
             << "\n";
    return 0;
}
