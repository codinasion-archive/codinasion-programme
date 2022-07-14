// WAP to convert uppercase string to lowercase
#include <iostream>
using namespace std;
int main() {
	string ask; 
	cout << "String: ";
	cin >> ask; 
	int store; 
	for (auto i : ask) {
		store = i;
		if (store>=65 && store<=90) store+=32;
		cout << (char)store;
	}
	return 0;
}