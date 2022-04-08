## Write a program to print the length of a string

```
Input  : abcd
Output : 4
```

---

<CodeBlock slots="heading, code" repeat="1" languages="C#" />

#### C#

```cs
using System;

public class LengthOfString
{
    static void Main(string[] args)
    {
        // Input string
        Console.Write("Input : ");
        string input = Console.ReadLine();

        // Output length of string
        Console.WriteLine("Output : " + input.Length);
    }
}
```
