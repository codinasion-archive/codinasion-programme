## Write a C# programme to find the minimum of numbers.

```cs 
using System;
using System.Linq;

int Minimum(string input)
{
    return input.Split(" ").Min(x => int.Parse(x)));
}
```