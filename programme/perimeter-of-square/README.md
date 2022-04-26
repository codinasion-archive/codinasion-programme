## Write a programme to find perimeter of square

Perimeter of square = 4 * `side`

```
side : 4

perimeter : 16
```

---

<CodeBlock slots="heading, code" repeat="5" languages="C, Python, C++, Java, C#" />

#### C

```c
#include <stdio.h>
#include <stdlib.h> /* for atof function */

int main()
{
  double side, perimeter;
  char sidestr[32];

  printf("Enter length of side : ");
  for (;;)
  { /* get user input until input is valid */
    scanf("%s", sidestr);
    side = atof(sidestr);
    if (side <= 0)
    {
      printf("\nInvalid input.\n\nEnter length of side : ");
      continue;
    }
    else
      break;
  }
  perimeter = 4 * side;
  printf("Perimeter : %g\n", perimeter);
  return 0;
}
```

#### Python

```python
side = int(input("side : "))
print(f"\nperimeter : {side * 4}")
```

#### C++

```cpp
#include <iostream>
// this namespace function allows you to skip
// over the "std::".
using namespace std;

int main()
{
    // set up the variables for the two values
    int side;
    int perimeter;

    // getting the user input for the size of their side
    cout << "Side : ";
    cin >> side;

    // calculating the perimeter
    perimeter = side * 4;

    // printing out the result
    cout << "Perimeter : " << perimeter << endl;
}
```

#### Java

```java
import java.util.Scanner;

class perimiterofsquare {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        System.out.print("side : ");
        int s = Integer.parseInt(sc.nextLine());
        s = 4 * s;
        System.out.println("\nPerimeter : " + s);
        sc.close();
    }
}
```

#### C#

```cs
using System;

public class PerimeterOfSquare
{
    public static void Main(string[] args)
    {
        Console.Write("Side : ");
        string input = Console.ReadLine();
        int side = 0;
        // verifies valid input and passes converted int to side variable
        if (int.TryParse(input, out side))
        {
            Console.WriteLine("Perimeter : " + (side * 4));
        }
        else
        {
            Console.WriteLine("\n*** Invalid input !!! ***");
        }
    }
}
```
