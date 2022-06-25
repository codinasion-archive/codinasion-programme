---
title: Print Fibonacci series without recursion.
description: Write a program to print Fibonacci series of n numbers without using recursion.
image: hero.png
tags:
  - c
  - java
  - python
  - cpp
  - cs
  - go
  - js
contributors:
  - NeelPatel31
  - karthiksbh
  - jojo4441
  - MadhuS-1605
  - ClasherKasten
---

## Write a program to print Fibonacci series without using recursion

```txt
Input: 10
Output: 0 1 1 2 3 5 8 13 21 34
```

---

<CodeBlock>

```c
#include <stdio.h>
int main()
{
    int a = 0, b = 1, temp = 0, n;
    printf("Input  : ");
    scanf("%d", &n);
    int i = 0;
    printf("Output : ");
    while (i != n)
    {
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b;
        i++;
    }
    printf("\n");
    return 0;
}
```

```java
import java.util.Scanner;

public class solution {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        int n = sc.nextInt();
        int a = 0, b = 1, temp = 0;

        System.out.print("\n" + a + " " + b);

        for (int i = 2; i < n; i++) {
            temp = a + b;
            System.out.print(" " + temp);
            a = b;
            b = temp;
        }
        System.out.println();
        sc.close();
    }
}
```

```python
a = 0
b = 1
i = 0
n = int(input("Input  : "))
print("Output : ", end="")
while (i != n):
    print(a, end=" ")
    temp = a
    a = b
    b = temp + b
    i += 1
print()
```

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, i = 0, temp = 0, n = 0;
    cout << "Input  : ";
    cin >> n;
    cout << "Output : ";
    while (i != n)
    {
        cout << a << " ";
        temp = a;
        a = b;
        b = temp + b;
        i++;
    }
    cout << endl;
    return 0;
}
```

```cs
using System;

public class Fibonaci
{
    static void Main(string[] args)
    {
        Console.Write("Input  : ");
        int n = int.Parse(Console.ReadLine());

        int a = 0, b = 1, i = 0, temp = 0;

        Console.Write("Output : ");

        while (i != n)
        {
            Console.Write(a + " ");
            temp = a;
            a = b;
            b = temp + b;
            i++;
        }

        Console.Write("\n");
    }
}
```

```go
package main

import (
	"fmt"
	"math/big"
)

func fibonacciSeriesWithoutRecusion(n int) *big.Int {
	var a, b, c *big.Int
	a = big.NewInt(0)
	b = big.NewInt(1)
	c = big.NewInt(0)
	fmt.Print(a, " ")
	fmt.Print(b, " ")
	for i := 0; i < n-2; i++ {
		c = a.Add(a, b)
		a = b
		b = c
		fmt.Print(c, " ")
	}
	fmt.Println("")
	return c
}

func main() {
	var n int
	fmt.Print("Enter a number : ")
	fmt.Scan(&n)
	fmt.Print("\nOutput : ")
	fibonacciSeriesWithoutRecusion(n)
}
```

```js
"use strict";

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question('Input: ', n => {
	n = Number(n);
	let [a, b] = [0, 1];
	if (isNaN(n)) {
		console.log('Some error occured');
	} else {
		rl.write('Output:');
		for (let i = 0; i < n; i++) {
			rl.write(` ${a}`);
			let tmp = a
			a = b
			b = tmp + b
		}
		console.log();
	}
	rl.close();
});
```

</CodeBlock>
