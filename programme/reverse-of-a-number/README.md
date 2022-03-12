## Write a program to print the reverse of a number

```
Input: 1234
Output: 4321
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, C#" />

#### Python

```python
# Input
n = int(input('Input : '))

# Reversing the number using string slicing
reversed = int(str(n)[::-1])

# Output
print('Output: ',reversed)
```

#### C#

```cs
using System;
using System.Linq;

public class Reverse
{
    static void Main(string[] args)
    {
        int Reverse(int input)
        {
            return int.Parse(new string(input.ToString()
                .Reverse()
                .ToArray()
            ));
        }

        // Input numbers
        Console.Write("Enter numbers : ");
        int input = int.Parse(Console.ReadLine());


        // output minimum number
        Console.WriteLine("Reversed : " + Reverse(input));
    }
}
```
