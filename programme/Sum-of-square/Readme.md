## Write a programme to find sum of square of 'n' number.

```
Input: 4
Output: 30
```

---

```C
#include<stdio.h>
int main(){
    int a,total=0;
    printf("Input: ");
    scanf("%d",&a);
    for(int i=1 ; i<=a ; i++){
        total += (i*i);
    }
    printf("Output: %d",total);
    return 0;
}
```