#include<iostream>
#include<string>
using namespace std;
void convert(int a){
    int k =0;
    string s = "";
    while(a>0){
        k = (a%2);
        s.append(to_string(k));
        a=a/2;
    }
    for(int i = s.length()-1 ; i>=0 ; i--){
        cout<<s.at(i);
    }
}
int main(){
    int a;
    cout<<"Input: ";
    cin>>a;
    cout<<"Output: ";
    convert(a);
    return 0;
}