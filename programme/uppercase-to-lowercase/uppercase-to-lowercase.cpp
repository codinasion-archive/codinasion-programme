// Write a programme to convert uppercase string to lowercase
#include <iostream>

using namespace std;

int main()
{
    string ask;
    cout << "Input  : ";
    getline(cin, ask);
    int store;
    cout << "Output : ";
    for (auto i : ask)
    {
        store = i;
        if (store >= 65 && store <= 90)
            store += 32;
        cout << (char)store;
    }
    cout << endl;
    return 0;
}
