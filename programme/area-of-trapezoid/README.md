## Write a  program to compute area of trapezoid

```
Base 1 : 5
Base 2 : 10
Height : 7

Area : 52.5
```

---

<CodeBlock slots="heading, code" repeat="3" languages="C#, Python, Java" />

#### C#

```cs
using System;

class MainClass
{
    public static void Main(string[] args)
    {
        Console.Write("Base 1 : ");
        double base1 = Convert.ToDouble(Console.ReadLine());

        Console.Write("Base 2 : ");
        double base2 = Convert.ToDouble(Console.ReadLine());

        Console.Write("Height : ");
        double height = Convert.ToDouble(Console.ReadLine());

        double area = (base1 + base2) * height / 2;
        Console.WriteLine("\nThe area of trapezoid is : " + area);

    }
}
```

#### Python

```python
base1 = int(input('Base 1 : '))
base2 = int(input('Base 2 : '))
height = int(input('Height : '))

area = (base1 + base2) * height * 0.5
print('\nArea:', area)
```

#### Java

```java
import java.util.Scanner;

public class AreaOfTrapezoid {

    public static double area(double base1, double base2, double height) {
        return ((base1 + base2) / 2) * height;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Base 1 : ");
        double base1 = sc.nextDouble();
        System.out.print("Base 2 : ");
        double base2 = sc.nextDouble();
        System.out.print("Height : ");
        double height = sc.nextDouble();
        System.out.println("\nArea : " + area(base1, base2, height));
        sc.close();
    }
}
```
