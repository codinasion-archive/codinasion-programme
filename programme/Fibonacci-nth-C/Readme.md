## Write a program to print Fibonacci series.

```
Input: 10
Output: 0 1 1 2 3 5 8 13 21 34
```

---

```C
#include <stdio.h>
int main(){
    int a=0,b=1,temp=0,n;
    printf("Input: ");
    scanf("%d",&n);
    int i=0;
    while(i!=n){
        printf("%d ",a);
        temp = a;
        a = b;
        b = temp + b;
        i++;
    }
    return 0;
}
```