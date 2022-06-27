#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main ()
{
	//Define first vector array
	vector<string> arr1 = {"abcd", "efgh", "ijklmn", "opq", "rstuvw", "xyz"};
	cout << "Array : ";
	for (auto i : arr1)
	{
		cout << i << ' ';
	}
	cout << '\n';

	//Define range for element slice
	int start = 2, end = 3;
	cout << "Start : " << start << '\n' << "End   : " << end << '\n';
	//Create new vector array
	vector<string> arr2;

	//Iterate through every element of arr1
	for (auto i : arr1)
	{
		//Push_back sliced element to arr2 
		arr2.push_back(i.substr(start - 1, end - start + 1));
	}
	
	//Print new vector array
	cout << "Sliced Array : ";
	for (auto i : arr2)
	{
		cout << i << ' ';
	}
	cout << '\n';

	return 0;
}
