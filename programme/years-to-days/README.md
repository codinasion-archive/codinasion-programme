## Write a programme to convert years to days.

```
Input : 1
Output : 365

Input : 2
Ouput : 730
```

---

<CodeBlock slots="heading, code" repeat="1" languages="C#" />

#### C#

```cs
using System;

public class YearsToDays
{
    static void Main(string[] args)
    {
        int YearsToDays(int years)
        {
            return years * 365;
        }

        // Input number of years
        Console.Write("Years: ");
        int years = int.Parse(Console.ReadLine());

        // Days output
        Console.WriteLine("Days: " + YearsToDays(years));
    }
}
```
