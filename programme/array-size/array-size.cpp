#include <iostream>
#include <vector>
using namespace std;
template <typename T> int array_size_2(vector<T> array){
    return array.size();
}
int main(){
    char arraytest1[0];                        // length == 0
    int arraytest2[5]={0,1,2,3,4};             // length == 5

    cout << "test 1 : " << (*(&arraytest1+1)-arraytest1==0) << endl;
    cout << "test 2 : " << (sizeof(arraytest2)/sizeof(arraytest2[0])==5) << endl;

    vector<char> arrayOfChars = {'4','3','c'}; // length == 3
    vector<int> arrayOfIntegers = {1,3,5,2,3}; // length == 5
    
    cout << "test 3 : " << (array_size_2(arrayOfChars) == 3) << endl;
    cout << "test 4 : " << (array_size_2(arrayOfIntegers) == 5) << endl;
}