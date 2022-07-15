// WAP to convert lowercase to uppercase
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
        if (store >= 97 && store <= 122)
            store -= 32;
        cout << (char)store;
    }
    cout << endl;
    return 0;
}
