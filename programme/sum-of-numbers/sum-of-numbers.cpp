#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int a;
    while(cin.peek() != '\n'){
        cin >> a;
        n += a;
    }
    cout << n;
    return 0;
}
