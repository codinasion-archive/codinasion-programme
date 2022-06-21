---
title: Even or Odd
description: Write a programme to check a number even or odd
image: hero.png
tags:
  - java
  - cs
  - js
  - c
  - go
  - python
contributors:
  - nikhilnarla
  - hansleykowlessur
  - rutterjt
  - ClasherKasten
  - umaxyon
  - Yilmaz98
  - d-coder111
---

## Write a programme to check a number even or odd

```txt
Input  : 3
Output : Odd Number
```

```txt
Input  : 2
Output : Even Number
```

---

<CodeBlock>

```java
import java.util.Scanner;

public class EvenOrOdd {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int num;

    System.out.print("Enter the number : ");
    num = sc.nextInt();

    if (num % 2 == 0) System.out.println(
      "\nOutput : Even Number"
    ); else System.out.println("\nOutput : Odd Number");

    sc.close();
  }
}
```
```java
// A program to check if the entered digit is even or odd using bitwise AND operator(Optimized method)	
import java.util.Scanner;

public class BetterEvenOrOdd{

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int num;

    System.out.print("Enter the number : ");
    num = sc.nextInt();
    
    if ((num & 1) == 1) {
            System.out.println("\nOutput : Even Number");
        }
    
    else {
            System.out.println("\nOutput : Odd Number");
        }
    sc.close();
  }
}
```	

```cs
using System;

class EvenOrOdd
{
    static void Main(string[] args)
    {
        try
        {
            // Initialisation
            string firstNumStr = string.Empty;
            const string ODD_NUMBER_MSG = "Odd number";
            const string EVEN_NUMBER_MSG = "Even number";

            // Read value from keyboard
            Console.Write("Input  : ");
            firstNumStr = Console.ReadLine();

            // Parse string to number
            int numericValue = int.Parse(firstNumStr);

            // Use the modulus operator to check
            // if the remainder is zero for even number
            Console.Write("Output : ");
            if (numericValue % 2 == 0)
            {
                // Even message
                Console.WriteLine (EVEN_NUMBER_MSG);
            }
            else
            {
                // Odd message
                Console.WriteLine (ODD_NUMBER_MSG);
            }
        }
        // Handle other exceptions
        catch (Exception ex)
        {
            Console
                .WriteLine($"Errors => {ex.Message}{Environment.NewLine}
                    ex.StackTrace}")
        }
    }
}
```

```javascript
const evenOrOdd = (n) => {
  return n % 2 === 0 ? "Even Number" : "Odd Number";
};

const input = 3;
console.log("Input  :", input);
console.log("Output :", evenOrOdd(input));
```

```c
#include <stdio.h>

int main(void)
{
    unsigned long long number;
    printf("Input  : ");
    scanf("%llud", &number);
    printf("Output : %s Number\n", number % 2 == 0 ? "Even" : "Odd");
    return 0;
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

	var evenOrOdd string
	if num%2 == 0 {
		evenOrOdd = "Even"
	} else {
		evenOrOdd = "Odd"
	}

	fmt.Printf("\nOutput : %s Number\n", evenOrOdd)
}
```

```python
n = int(input("Input  : "))
print("Output : ", end="")
if n % 2 == 0:
    print("Even Number")
else:
    print("Odd Number")
```

</CodeBlock>

### Using bitwise AND operator

<CodeBlock>

```java
import java.util.Scanner;

public class BetterEvenOrOdd {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int num;

    System.out.print("Enter the number : ");
    num = sc.nextInt();

    if ((num & 1) == 1) {
      System.out.println("\nOutput : Odd Number");
    } else {
      System.out.println("\nOutput : Even Number");
    }
    sc.close();
  }
}
```

</CodeBlock>
