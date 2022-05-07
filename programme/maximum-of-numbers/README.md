---
title: Maximum of Numbers
description: Write a program to print the maximum of given numbers
tags:
  - python
  - cs
contributors:
  - harshi1122
  - Mrczarny
---

## Write a program to print the maximum of given numbers

```txt
Input: 2 4 1 16 6
Output: 16
```

---

<CodeBlock>

```python
# Taking input and making a list
n = list(map(int, input("Input: ").split()))

# Printing the maximum value
print(max(n))
```

```cs
using System;
using System.Linq;

public class MaxNumber
{
    static void Main(string[] args)
    {
        int Maximum(string input)
        {
            return input.Split(" ").Max(x => int.Parse(x));
        }

        // Input numbers
        Console.Write("Enter numbers : ");
        string input = Console.ReadLine();

        // output maximum number
        Console.WriteLine("Maximum : " + Maximum(input));
    }
}
```

</CodeBlock>
