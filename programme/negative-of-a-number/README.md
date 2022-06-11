---
title: Negative of a number
description: Write a programme to find negative of a number
image: hero.png
tags:
  - cs
contributors:
  - hansleykowlessur
---

## Write a programme to find negative of a number

```txt
Input  : 10
Output : -10
```

---

<CodeBlock>

```cs
using System;

class NegativeOfANumber
{
    static void Main(string[] args)
    {
        try
        {
            // Initialisation
            string numberStr = string.Empty;
            int negativeNumber = 0;

            // Read value from keyboard
            Console.Write("Input  : ");
            numberStr = Console.ReadLine();

            // Convert string to int
            int numConverted = int.Parse(numberStr);

            // If the number is already negative no conversion else substract 0 from the +ve number to convert it to -ve
            negativeNumber =
                (numConverted <= 0) ? numConverted : 0 - numConverted;

            // Display result
            Console.WriteLine($"Output : {negativeNumber}");
        }
        // Handle other exceptions
        catch (Exception ex)
        {
            Console.WriteLine($"Errors => {ex.Message}{Environment.NewLine}{ex.StackTrace}");
        }
    }
}
```

</CodeBlock>
