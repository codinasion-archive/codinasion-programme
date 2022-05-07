---
title: Perimeter of rectangle
description: Write a programme to find perimeter of rectangle
tags:
  - python
  - java
  - c
  - cs
contributors:
  - JDev64
  - Badboy-16
  - KikiManjaro
  - whtann
---

## Write a programme to find perimeter of rectangle

Perimeter of rectangle = 2 \* ( `length` + `breadth` )

```
length  : 12
breadth : 2

perimeter : 28
```

---

<CodeBlock>

```python
length = int(input("length  : "))
breadth = int(input("breadth : "))

print(f"\nperimeter : {2*(length + breadth)}")
```

```java
import java.util.Scanner;

class PerimeterOfRectangle {
    public static void main(String[] args) {
        double length, breadth = 0.0;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter length  : ");
            length = sc.nextDouble();
            System.out.print("Enter breadth : ");
            breadth = sc.nextDouble();
        }
        double perimeter = 2 * (length + breadth);
        System.out.println("\nPerimeter : " + perimeter);
    }
}
```

```c
#include <stdio.h>

int main()
{
    double length, breadth, perimeter;

    printf("length  : ");
    scanf("%lf", &length);
    printf("breadth : ");
    scanf("%lf", &breadth);

    perimeter = 2 * (length + breadth);
    printf("\nperimeter : %g\n", perimeter);
    return 0;
}
```

```cs
using System;

public class PerimeterOfRectangle
{
    public static void Main(string[] args)
    {
        Console.Write("Length    : ");
        string input = Console.ReadLine();
        int length, breadth;
        // verifies valid input and passes converted int to length variable
        if (int.TryParse(input, out length))
        {
            Console.Write("Breadth   : ");
            input = Console.ReadLine();
            // gets 2nd user input and passes converted int to breadth variable
            if (int.TryParse(input, out breadth))
            {
                Console.WriteLine("\nPerimeter : " + (2 * (length + breadth)));
                return;
            }
        }
        Console.WriteLine("\n*** Invalid input !!! ***");
    }
}
```

</CodeBlock>
