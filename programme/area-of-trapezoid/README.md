## Write a  program to compute area of trapezoid

```
Base 1 : 5
Base 2 : 10
Height : 7

Area : 52.5
```

---

<CodeBlock slots="heading, code" repeat="1" languages="C#" />

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
