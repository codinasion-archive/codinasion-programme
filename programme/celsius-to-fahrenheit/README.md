## Write a program to convert the temperature from Celsius to Fahrenheit

---

<CodeBlock slots="heading, code" repeat="1" languages="C" />

#### C

```c
#include <stdio.h>

void main()
{
  float c;
  printf("Enter temp. (in C) : ");
  scanf("%f", &c);
  float f = ((9 * c) / 5) + 32;
  printf("Temp. in F : %f\n", f);
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




