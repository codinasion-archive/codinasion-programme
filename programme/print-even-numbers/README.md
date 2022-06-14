---
title: Print Even Numbers
description: Write a programme to print first n even numbers
image: hero.png
tags:
  - python
  - java
  - c
  - cpp
  - cs
  - go
contributors:
  - PA11TEDDU
  - Anzo52
  - ClasherKasten
  - hansleykowlessur
  - GodKimba
---

## Write a programme to print first n even numbers

```txt
Input  : 5
Output : 0 2 4 6 8
```

---

<CodeBlock>

```python
n = int(input("Enter n : "))
for i in range(0, 2*n):
    if(i % 2 == 0):
        print(i, end=" ")
```

```java
import java.util.Scanner;

public class PrintEven {
  public static int[] printEven(int num) {
    int[] arr = new int[num];
    int i = 0;
    while (i < num) {
      arr[i] = i * 2;
      i++;
    }
    return arr;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Input  : ");
    int num = sc.nextInt();
    int[] arr = printEven(num);
    System.out.print("Output : ");
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();
    sc.close();
  }
}
```

```c
#include <stdio.h>

int main(void)
{
    int n;
    printf("Input  : ");
    scanf("%d", &n);
    printf("Output : ");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", 2 * i);
    }
    printf("%d\n", 2 * (n - 1));
    return 0;
}
```

```cpp
#include <iostream>

int main(void)
{
    int n;
    std::cout << "Input  : ";
    std::cin >> n;
    std::cout << "Output : ";
    for (int i = 0; i < n - 1; i++)
    {
        std::cout << 2 * i << " ";
    }
    std::cout << 2 * (n - 1) << std::endl;
    return 0;
}
```

```cs
using System;
using System.Linq;

class PrintEvenNumber
{
    static void Main(string[] args)
    {
        try
        {
            // Initialisation
            string numStr = string.Empty;
            string evenNumberStr = string.Empty;

            // Read value from keyboard
            Console.Write("Input  :  ");
            numStr = Console.ReadLine();

            // Loop n-th time based on value input
            for (int eachNum = 0; eachNum < int.Parse(numStr); eachNum++)
            {
                // Check if even number and concat with previous string
                if (eachNum % 2 == 0)
                    evenNumberStr = evenNumberStr + " " + eachNum;
            }

            // Display result
            Console.WriteLine($"Output : {evenNumberStr}");
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
)

func main() {
	var n int
	fmt.Print("Enter number : ")
	fmt.Scanln(&n)
	fmt.Print("\nOutput : ")
	printEven(n)
}

func printEven(n int) {
	for i := 0; i <= n-1; i++ {
		fmt.Print(i*2, " ")
	}
	fmt.Println("")
}
```

</CodeBlock>
