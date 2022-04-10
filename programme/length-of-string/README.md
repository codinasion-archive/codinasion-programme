## Write a program to print the length of a string

```
Input  : abcd
Output : 4
```

---

<CodeBlock slots="heading, code" repeat="2" languages="C#, C" />

#### C#

```cs
using System;

public class LengthOfString
{
    static void Main(string[] args)
    {
        // Input string
        Console.Write("Input  : ");
        string input = Console.ReadLine();

        // Output length of string
        Console.WriteLine("Output : " + input.Length);
    }
}
```

#### C

```c
#include <stdio.h>

#define LIMIT 32

int main()
{
  int length;
  char inputstr[LIMIT];

  printf("Input  : ");
  scanf("%s", inputstr);
  for (length = 0; inputstr[length] != '\0'; length++)
    ;
  printf("Output : %d\n", length);
  return 0;
}
```
