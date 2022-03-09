## Write a program to divide two numbers

```
Input  : 4 2
Output : 2

Input  : 2 4
Output : 0.5
```

---

<CodeBlock slots="heading, code" repeat="1" languages="C" />

#### C

```c
#include <stdio.h>
#include <stdlib.h> // for the exit function
#include <assert.h> // for the assert function

double divide(int num1, int num2);
void test(void);

int main(void)
{
    int num1, num2;
    double output;

    test();

    printf("Input  : ");
    scanf("%d %d", &num1, &num2);
    output = divide(num1, num2);
    printf("Output : %.1lf\n", output);

    return 0;
}

// performs division
double divide(int num1, int num2)
{
    // if divisor is 0, exit the program
    if (num2 == 0)
    {
        printf("Division by 0 is not allowed!\n");
        exit(EXIT_FAILURE);
    }
    return (double)num1 / (double)num2;
}

// checks correctness of the divide function
void test(void)
{
    assert(divide(4, 2) == 2.0);
    assert(divide(2, 4) == 0.5);
}
```
