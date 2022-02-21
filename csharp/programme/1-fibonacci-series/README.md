## Write a C# program to print Fibonacci series.

```c#
using System;

namespace Codinasion
{
    public class FibonacciSeries
    {
        public void Print(int len)
        {
            int a = 0, b = 1, c = 0;
            Console.Write($"{a} {b}");
            for (int i = 2; i < len; i++)
            {
                c = a + b;
                a = b;
                b = c;
                Console.Write($" {c}");
            }
        }
    }
}
```
