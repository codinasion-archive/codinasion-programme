---
title: Celsius to Fahrenheit
description: Write a program to convert the temperature from Celsius to Fahrenheit
image: hero.png
tags:
  - c
  - python
  - cpp
  - java
  - cs
contributors:
  - seraph776
  - yslDevelop
  - Khushi369
  - andrew9078
---

## Write a program to convert the temperature from Celsius to Fahrenheit

```txt
Input ( c )  : -40
Output ( F ) : -40
```

---

<CodeBlock>

```c
#include <stdio.h>

void main()
{
  float c;
  printf("Enter temp. (in c) : ");
  scanf("%f", &c);
  float f = ((9 * c) / 5) + 32;
  printf("Temp. in F : %f\n", f);
}
```

```python
def celsius_to_fahrenheit(celsius: int) -> float:
    """Converts celsius to farenheit"""
    fahrenheit = (celsius * 9 / 5) + 32
    return fahrenheit


if __name__ == '__main__':
    user_input = input('Enter celsius : ')
    print(f"\nFahrenheit : {celsius_to_fahrenheit(int(user_input))}")
```

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

```java
import java.util.Scanner;

class Celsius_to_Fahrenheit {
    public static void main(String[] args) {
        float cel, far;

        Scanner s = new Scanner(System.in);
        System.out.print("Input ( c )  : ");
        cel = s.nextInt();

        far = cel * 9 / 5 + 32;

        System.out.println("Output ( F ) : " + far);
    }
}
```

```cs
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace codinasion
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter temp. (in c) : ");
            float temperature = float.Parse(Console.ReadLine());
            temperature = ((9 * temperature) / 5) + 32;
            Console.Write("Temp. in F : " + temperature + "\n");
        }
    }
}
```

</CodeBlock>
