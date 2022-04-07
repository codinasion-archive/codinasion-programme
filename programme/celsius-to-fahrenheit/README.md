## Write a program to convert the temperature from Celsius to Fahrenheit and from Fahrenheit to Celsius.

---

<CodeBlock slots="heading, code" repeat="1" languages="C" />

#### C

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


### Python

```python

def celsius_to_fahrenheit(celsius) -> float:
    """Converts celsius to fahrenheit """
    fahrenheit = (celsius * 9 / 5) + 32
    return fahrenheit


if __name__ == '__main__':
    while user_input := input('Enter celsius:\n> '):
        print(f'{celsius_to_fahrenheit(int(user_input))}\n')

```




