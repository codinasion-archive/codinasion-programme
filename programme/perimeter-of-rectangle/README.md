## Write a programme to find perimeter of rectangle

Perimeter of rectangle = 2 * ( ` length ` + ` breadth ` )

```
length  : 12
breadth : 2

perimeter : 28
```

---

<CodeBlock slots="heading, code" repeat="3" languages="Python, Java, C" />

#### Python

```python
length = int(input("length  : "))
breadth = int(input("breadth : "))

print(f"\nperimeter : {2*(length + breadth)}")
```

#### Java

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

#### C

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
