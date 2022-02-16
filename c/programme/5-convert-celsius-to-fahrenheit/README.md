## Write a program to convert the temperature from Celsius to Fahrenheit and from Fahrenheit to Celsius.

```c
#include <stdio.h>

void CtoF()
{
    float c;
    printf("Enter temp. (in C) : ");
    scanf("%f", &c);
    float f = ((9 * c) / 5) + 32;
    printf("Temp. in F : %f F\n", f);
}

void FtoC()
{
    float f;
    printf("Enter temp. (in F) : ");
    scanf("%f", &f);
    float c = ((f - 32) * 5) / 9;
    printf("Temp. in C : %f C\n", c);
}

void main()
{
    int n;
    printf("1. C to F\n");
    printf("2. F to C\n");
    printf("Enter choice : ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        CtoF();
        break;

    case 2:
        FtoC();
        break;

    default:
        break;
    }
}
```
