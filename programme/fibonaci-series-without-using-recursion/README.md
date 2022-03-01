## Write a program to print Fibonacci series without using recursion.

```
Input: 10
Output: 0 1 1 2 3 5 8 13 21 34
```

---

<CodeBlock slots="heading, code" repeat="1" languages="C" />

#### C

```c
#include <stdio.h>
int main()
{
    int a = 0, b = 1, temp = 0, n;
    printf("Input  : ");
    scanf("%d", &n);
    int i = 0;
    printf("Output : ");
    while (i != n)
    {
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b;
        i++;
    }
    printf("\n");
    return 0;
}
```
