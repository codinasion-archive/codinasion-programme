## Write a program to check prime number.

```
Input: 7
Output: Not prime number
```

---

```C
#include<stdio.h>
int main(){
    int a,b=0;
    printf("Input: ");
    scanf("%d",&a);
    for(int i = 2 ; i<a;i++){
        if(a%i==0){
            b=1;
            break;
        }
    }
    if(b==1){
        printf("Not prime number");
    }
    else{
        printf("Prime number");
    }
    return 0;
}
```