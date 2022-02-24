## Write a programme to print ASCII Value of a character.

```
Input  : A
Output : 65
```

---

<CodeBlock slots="heading, code" repeat="1" languages="C#" />

#### C#

```c#
using System;
using System.Text;

public class ASCIIValue
{
    static void Main(string[] args)
    {
        int convert(string input)
        {
            return Encoding.ASCII.GetBytes(input)[0];
        }

        // Input character
        Console.Write("Enter character : ");
        string input = Console.ReadLine();

        // output ASCII value
        Console.WriteLine("ASCII Value : " + convert(input));
    }
}
```