## Write a program to convert the temperature from Celsius to Fahrenheit

```
Input ( C )  : -40
Output ( F ) : -40
```

---

<CodeBlock slots="heading, code" repeat="3" languages="C, Python, C++" />

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

#### Python

```python
def celsius_to_fahrenheit(celsius: int) -> float:
    """Converts celsius to farenheit"""
    fahrenheit = (celsius * 9 / 5) + 32
    return fahrenheit


if __name__ == '__main__':
    user_input = input('Enter celsius : ')
    print(f"\nFahrenheit : {celsius_to_fahrenheit(int(user_input))}")
```

#### C++

```cpp
#include <iostream>

using namespace std;

int main()
{

  float Fahrenheit; // initialize Fahrenheit
  float Celsius;    // initialize Celsius

  cout << "Enter the temperature in Celsius: ";
  cin >> Celsius;

  Fahrenheit = ((Celsius * 9.0) / 5.0) + 32;

  cout << "\nThe temperature in Celsius is: " << Celsius << endl;
  cout << "The temperature in Fahrenheit is: " << Fahrenheit << endl;
}
```
