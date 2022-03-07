## Write a program to print the Fibonacci series for 'n' numbers

```
Input: 10
Output: 0 1 1 2 3 5 8 13 21 34
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, C" />

#### Python

```python
# Function to print the Fibonacci series
def Fib(n):
    if n==0:
        return 0
    if n==1:
        return 1
    else:
        return (Fib(n-1)+Fib(n-2))

# Input
n=int(input("Input: "))

# These line print the Output while ensuring that all the numbers are displayed on one line
print('Output: ',end ='')
for i in range(n):
    print(Fib(i),end =' ')
```

#### C

```c
#include <stdio.h>
int fibonacci(int);
int main()
{
    int n, i;
    printf("Input  : ");
    scanf("%d", &n);
    printf("Output : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

int fibonacci(int i)
{
    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return (fibonacci(i - 1) + fibonacci(i - 2));
}
```
