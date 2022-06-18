---
title: Add two numbers
description: Write a program to add two numbers
image: hero.png
tags:
  - python
  - cs
  - cpp
  - java
  - go
  - c
  - js
  - jl
contributors:
  - harshi1122
  - Mrczarny
  - ramanand-rv
  - VSen910
  - GodKimba
  - ClasherKasten
  - kvaithin
  - SanjayShetty01
---

## Write a program to add two numbers

```txt
Input  : 5 4
Output : 9
```

---

<CodeBlock>

```python
# input two numbers
x, y = input("Enter two numbers: ").split()

# print sum
print("Sum of numbers : ", int(x)+int(y))
```

```cs
using System;
public class AddTwo
{
    static void Main(string[] args)
    {
        int AddTwo(string input)
        {
            var sAr = input.Split(" ");
            return int.Parse(sAr[0]) + int.Parse(sAr[1]);
        }

        // Input numbers
        Console.Write("Enter numbers : ");
        string input = Console.ReadLine();

        // output sum of numbers
        Console.WriteLine("Sum : " + AddTwo(input));
    }
}
```

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;

  // input
  cout << "Enter numbers : ";
  cin >> a >> b;

  // calculate
  int sum = a + b;

  // output area
  cout << endl;
  cout << "Sum of numbers: " << sum << endl;

  return 0;
}
```

```java
import java.util.Scanner;

public class AddTwoNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b;

        System.out.print("Enter two numbers to add : ");
        a = sc.nextInt();
        b = sc.nextInt();

        int sum = a + b;
        System.out.println("\nThe sum of numbers is : " + sum);

        sc.close();
    }
}
```

```go
package main

import "fmt"

func AddTwoNumbers(x, y int) int {
	return x + y
}

func main() {
	var x int
	var y int
	var sum int

	fmt.Print("Enter the first number  : ")

	fmt.Scanln(&x)

	fmt.Print("Enter the second number : ")
	fmt.Scanln(&y)

	sum = AddTwoNumbers(x, y)

	fmt.Printf("\nThe sum of %d and %d is : %d\n", x, y, sum)
}
```

```c
#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    int sum = a + b;

    printf("\n%d + %d = %d\n", a, b, sum);
    return 0;
}
```

```javascript
"use strict";

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Please enter the first number   : ", (firstNumber) => {
  rl.question("Please enter the second number  : ", (secondNumber) => {
    const result = parseInt(firstNumber) + parseInt(secondNumber);
    if (isNaN(result)) {
      console.log(`You've entered non numerical values. Pls try again.`);
    } else {
      console.log(`\nThe sum of above two numbers is : ${result}`);
    }
    rl.close();
  });
});
```
```julia

print("Input: ")
x,y = split(readline())

x = parse(Int32, x)
y = parse(Int32, y)

println("Sum: ", x + y)

```

</CodeBlock>
