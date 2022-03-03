## Write a program to print Fibonacci series without recursion.

```
Input: 10
Output: 0 1 1 2 3 5 8 13 21 34
```

---

```C++
#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,i=0,temp=0,n=0;
    cout<<"Input: ";
    cin>>n;
    while(i!=n){
        cout<<a<<" ";
        temp = a;
        a = b;
        b = temp + b;
        i++;
    }
    return 0;
}
```