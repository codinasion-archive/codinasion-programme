---
title: Swap two numbers without using third variable
description: Write a program to swap two numbers without using third variable
tags:
  - python
  - c
  - cpp
  - java
  - js
  - go
contributors:
  - Satyapriyo
  - aryangupta701
  - wkktoria
  - kzhang01
  - rossilor95
---

## Write a program to swap two numbers without using third variable

```txt
Input:  a=10 b=20
Output: a=20 b=10
```

---

<CodeBlock>

```python
# define variables
a = 10
b = 20

# swap numbers
a, b = b, a

# print result
print(a, b)
```

```c
#include <stdio.h>

int main()
{
  // initialize two numbers
  int number1, number2;
  printf("enter two numbers ");

  // taking input from user
  scanf("%d %d", &number1, &number2);

  // swapping the numbers
  number1 = number1 + number2;
  number2 = number1 - number2;
  number1 = number1 - number2;

  // after swapping output
  printf("after swap two numbers are %d and %d", number1, number2);

  return 0;
}
```

```cpp
#include <iostream>

void swap(int &x, int &y)
{
  x = x + y;
  y = x - y;
  x = x - y;
}

int main()
{
  int a, b;
  std::cout << "a : ";
  std::cin >> a;
  std::cout << "b : ";
  std::cin >> b;

  swap(a, b);

  std::cout << "\na = " << a << "\nb = " << b << "\n";

  return 0;
}
```

```java
import java.util.Scanner;

public class Swap {
    private static void swap(int a, int b) {
        System.out.println("\nNumbers before swap : " + a + " and " + b);
        a = a + b;
        b = a - b;
        a = a - b;
        System.out.println("\nNumbers after swap  : " + a + " and " + b);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int a = sc.nextInt();
        System.out.print("Enter another number : ");
        int b = sc.nextInt();

        swap(a, b);
        sc.close();
    }
}
```

```javascript
let a = 10;
let b = 20;

console.log(`Input  : a = ${a}, b = ${b}`);

[a, b] = [b, a];

console.log(`Output : a = ${a}, b = ${b}`);
```

```go
package main

import "fmt"

func swap(a, b int) (int, int) {
	return b, a
}

func main() {
	var a, b int

	fmt.Print("Enter the first number a  : ")
	fmt.Scan(&a)

	fmt.Print("Enter the second number b : ")
	fmt.Scan(&b)

	fmt.Printf("\nInput  : a=%d b=%d", a, b)

	a, b = swap(a, b)
	fmt.Printf("\nOutput : a=%d b=%d\n", a, b)
}
```

</CodeBlock>
