## Write a program to print number triangle pattern.

```
Input: 5
Output: 
    1
   121
  12321
 1234321
123454321
```

---

<CodeBlock slots="heading, code" repeat="1" languages="C" />

#### C

```C
#include<stdio.h>
void pattern(int a){
    printf("Output:\n");
    for(int i= 1; i<=a ; i++){
        int c = 1;
        for(int k = a ; k>i ; k--){
            printf(" ");
        }
        for(int j = 1; j<=2*i-1; j++){
            if(j<i){
                printf("%d",c);
                c++;
            }
            else{
                printf("%d",c);
                c--;
            }

        }
        printf("\n");
    }
}
int main(){
    int a;
    printf("Input: ");
    scanf("%d",&a);
    pattern(a);
    return 0;
}
```
