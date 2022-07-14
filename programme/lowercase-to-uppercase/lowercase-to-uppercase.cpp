// WAP to convert lowercase to uppercase
#include <iostream>
using namespace std;
int main() {
	string ask; 
	cout << "String: ";
	getline(cin, ask);
	int store; 
	for (auto i : ask) {
		store = i;
		if (store>=97 && store<=122) store-=32;
		cout << (char)store;
	}
	return 0;
}