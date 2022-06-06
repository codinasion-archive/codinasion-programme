---
title: Fibonacci Pattern
description: Write a program to print Fibonacci pattern
tags:
  - java
  - go
  - python
  - cpp
  - js
  - c
  - cs
contributors:
  - Anzo52
  - waleska404
  - rossilor95
  - siddhantchimankar
  - rutterjt
  - ClasherKasten
---

## Write a program to print Fibonacci pattern

```txt
Input  : 5
Output :

1
1 1
1 1 2
1 1 2 3
1 1 2 3 5
```

---

<CodeBlock>

```java
import java.util.Scanner;

public class FibonacciPattern {

    public static int fibonacci(int n) {
        return n = (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an integer : ");
        int n = sc.nextInt();
        System.out.println();
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(fibonacci(j) + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}
```

```go
package main

import (
	"fmt"
	"strconv"
)

func fibonacci(n int) int {
	if n <= 1 {
		return n
	}
	return fibonacci(n-1) + fibonacci(n-2)
}

func main() {
	var n int
	fmt.Print("Enter an integer : ")
	fmt.Scan(&n)

	for i := 1; i <= n; i++ {
		for j := 1; j <= i; j++ {
			fmt.Print(strconv.Itoa(fibonacci(j)) + " ")
		}
		fmt.Println()
	}
}
```

```python
def fibonacci_pattern(n: int) -> int:
    assert n > 0
    a, b = 0, 1
    for i in range(n):
        print(f"{b} ", end="")
        a, b = b, a + b
    print(end="\n")


if __name__ == "__main__":
    pattern_lenght = int(input(
        "Enter the lenght of the Fibonacci pattern to generate : "))
    for number in range(1, pattern_lenght + 1):
        fibonacci_pattern(number)
```

```cpp
#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{

    int n;
    cout << "Enter an Integer : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << fib(j) << " ";
        }
        cout << "\n";
    }

    return 0;
}
```

```javascript
const printFibs = (n) => {
  let str = "";
  let a = 1;
  let b = 1;
  for (let i = 0; i < n; i++) {
    str += `${a} `;
    console.log(str);
    [a, b] = [b, a + b];
  }
};

printFibs(8);
```

```c
#include <stdio.h>
#include <math.h>

#define SQRT_OF_5 (sqrt(5.0))
#define PHI ((1 + SQRT_OF_5) / 2)
#define PSI ((1 - SQRT_OF_5) / 2)

long long fib(long long n)
{
    return (long long)((pow(PHI, n) - pow(PSI, n)) / SQRT_OF_5);
}

int main(void)
{
    int n;
    printf("Input  : ");
    scanf("%d", &n);
    printf("Output :\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            printf("%lld ", fib(j));
        }
        printf("%lld\n", fib(i));
    }
}
```

```cs
using System;

namespace SimpleNumbers
{
    public class FibonacciPattern
    {
        private static void Fibonacci(int n)
        {
            int f1 = 0;
            int f2 = 1;
            int temp;

            for (int i = 0; i < n; i++)
            {
                Console.Write($"{f2} ");
                temp = f1;
                f1 = f2;
                f2 = temp + f1;
            }
            Console.WriteLine();
        }

        private static void PrintFibonacciPattern(int patternLength)
        {
            for (int n = 1; n <= patternLength; n++)
            {
                Fibonacci (n);
            }
        }

        public static void Main()
        {
            int patternLength;
            bool isInputValid;

            do
            {
                Console.Write("Enter an integer >= 2 : ");
                isInputValid =
                    int.TryParse(Console.ReadLine(), out patternLength);
            }
            while (!isInputValid || patternLength < 2);

            Console.WriteLine("\nInput  : " + patternLength);
            Console.WriteLine("Output : ");
            PrintFibonacciPattern (patternLength);
        }
    }
}
```

</CodeBlock>
