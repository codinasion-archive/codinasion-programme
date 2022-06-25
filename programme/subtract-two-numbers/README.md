---
title: Subtract two numbers
description: Write a programme to subtract two numbers
image: hero.png
tags:
  - python
  - c
  - cpp
  - java
  - cs
  - js
contributors:
  - DarkMatter-999
  - NeelPatel31
  - Mrczarny
  - ClasherKasten
---

## Write a program to subtract two numbers

```txt
Input  : 5 3
Output : 2
```

```txt
Input  : 3 5
Output : -2
```

---

<CodeBlock>

```python
# input two numbers
x, y = input("Enter two numbers: ").split()

# print difference
print("Difference of numbers : ", int(x)-int(y))
```

```c
#include<stdio.h>

int main() {
    // declare variables
    int x, y;

    // get input
    printf("Enter two numbers ");
    scanf("%d %d", &x, &y);

    // print difference
    printf("Difference of numbers : %d\n", (x-y));

    return 0;
}
```

```cpp
#include<iostream>

int main() {
    // declare variables
    int x, y;

    //get input
    std::cout << "Enter two numbers ";
    std::cin >> x;
    std::cin >> y;

    //print difference
    std::cout << "Difference of numbers : " << (x-y) << std::endl;

    return 0;
}
```

```java
import java.util.*;

public class solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input  : ");
        // Input 2 numbers
        int a = sc.nextInt();
        int b = sc.nextInt();
        // Print difference
        System.out.println("Output : " + (a - b));
        sc.close();
    }
}
```

```cs
using System;

public class Subtraction
{
    static void Main(string[] args)
    {
        int Subtract(int a, int b)
        {
            return a - b;
        }

        // Input a
        Console.Write("Enter a : ");
        int a = int.Parse(Console.ReadLine());
        // Input b
        Console.Write("Enter b : ");
        int b = int.Parse(Console.ReadLine()); ;

        // Difference of numbers
        Console.WriteLine("\nDifference of numbers: " + Subtract(a, b));
    }
}
```

```js
"use strict";

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question('Input  : ', (nums) => {
	let [x, y] = nums.split(' ').map(Number);
	if (isNaN(x) || isNaN(y)) {
		console.error('Some error occured');
	} else {
		console.log(`Òutput : ${x - y}`);
	}
	rl.close();
});
```

</CodeBlock>
