---
title: Negative of a number
description: Write a programme to find negative of a number
image: hero.png
tags:
  - cpp
  - python
  - cs
  - go
  - java
contributors:
  - Enoch02
  - hansleykowlessur
  - umaxyon
  - rossilor95
---

## Write a programme to find negative of a number

```txt
Input  : 10
Output : -10
```

---

<CodeBlock>

```cpp
#include <iostream>

int main()
{
    int input;
    std::cout << "Input  : ";
    std::cin >> input;
    std::cout << "Output : " << -input << "\n";
}
```

```python
input_number = int(input("Input  : "))

print(f"Output : {-input_number}")
```

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

```go
package main

import (
	"fmt"
	"strconv"
)

func main() {
	var str string

	fmt.Print("Input Number : ")
	fmt.Scan(&str)

	num, err := strconv.Atoi(str)
	if err != nil {
		fmt.Printf("Input error: %s", str)
		return
	}

	if num > 0 {
		num = -num
	}

	fmt.Printf("\nOutput: %d\n", num)
}
```

```java
import java.util.Scanner;

public class NegativeOfANumber {

  public static double getOpposite(double number) {
    return number *= -1;
  }

  public static void main(String[] args) {
    var sc = new Scanner(System.in);
    System.out.print("Input  : ");
    double number = sc.nextDouble();
    sc.close();
    System.out.println("Output : " + getOpposite(number));
  }
}
```

</CodeBlock>
