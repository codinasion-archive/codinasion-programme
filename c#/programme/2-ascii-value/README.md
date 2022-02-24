## Write a C# programme to print ASCII Value of a character.

```cs 
using System;
using System.Text;

int Minimum(string input)
{
    return Encoding.ASCII.GetBytes(input)[0];
}
```