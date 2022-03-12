#include<iostream>
using namespace std;
int main(){
    int a,n;
    cout<<"Input: ";
    cin>>a;
    cout<<"Output: ";
    while(a>0){
        n = a%10;
        cout<<n;
        a/=10;
    }
    return 0;
}