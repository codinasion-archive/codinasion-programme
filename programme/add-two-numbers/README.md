---
title: Add two numbers
description: Write a program to add two numbers
tags:
  - python
  - cs
  - cpp
  - java
contributors:
  - harshi1122
  - Mrczarny
  - ramanand-rv
  - VSen910
  - GodKimba
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

```Golang
// Write a programme to add two numbers
package main

import "fmt"

// This function receives two variables of type int
// and then returns an int type
func AddTwoNumbers(x, y int) int {
	return x + y
}

func main() {
	// Declaring x, y and sum variables of type int
	var x int
	var y int
	var sum int

	// Scanln -> to get the input from user
	fmt.Println("Enter the first number:")

	// Here the & is a way to access the previous declared variable
	// Simply speaking, it associate's the input value to the variable
	fmt.Scanln(&x)

	fmt.Println("Enter the second number:")
	fmt.Scanln(&y)

	sum = AddTwoNumbers(x, y)

	// Here the Printf(ormat) is to format the string
	// with the variables values
	// %d is for formatting some types of ints
	fmt.Printf("The sum of %d and %d, is: %d\n", x, y, sum)
}
```
</CodeBlock>
