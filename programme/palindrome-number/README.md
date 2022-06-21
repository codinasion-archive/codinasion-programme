---
title: Check palindrome number
description: Write a program to check palindrome number
image: hero.png
tags:
  - python
  - java
  - cpp
  - c
  - go
  - js
  - cs
contributors:
  - NeelPatel31
  - seraph776
  - rossilor95
---

## Write a program to check palindrome number.

```txt
Input  : 121
Output : Palindrome number
```

---

<CodeBlock>

```python
def check_palindrome(n: int) -> str:
    """Checks if n is a palindrome"""
    if str(n) == str(n)[::-1]:
        return 'Palindrome Number'
    return 'Not Palindrome Number'


num = int(input('Input  : '))
print('\nOutput :', check_palindrome(num))
```

```java
import java.util.*;

public class solution {
    public static String checkPalindrome(int a) {
        int pal = 0, n;
        int original = a;
        while (a > 0) {
            n = a % 10;
            pal = pal * 10 + n;
            a = a / 10;
        }
        if (original == pal) {
            return "Palindrome number";
        }
        return "Not palindrome number";
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input  : ");
        int num = sc.nextInt();
        System.out.println("Output : " + checkPalindrome(num));
        sc.close();
    }
}
```

```cpp
#include <iostream>
#include <cstring>
using namespace std;
string checkPalindrome(int a)
{
    int pal = 0, n;
    int original = a;
    while (a > 0)
    {
        n = a % 10;
        pal = pal * 10 + n;
        a = a / 10;
    }
    if (original == pal)
    {
        return "Palindrome number";
    }
    return "Not palindrome number";
}

int main()
{
    int num;
    cout << "Input  : ";
    cin >> num;
    cout << "Output : " << checkPalindrome(num) << endl;
    return 0;
}
```

```c
#include <stdio.h>
char *checkPalindrome(int a)
{
    int pal = 0, n;
    int original = a;
    while (a > 0)
    {
        n = a % 10;
        pal = pal * 10 + n;
        a = a / 10;
    }
    if (original == pal)
    {
        return "Palindrome number";
    }
    return "Not palindrome number";
}
int main()
{
    int num, b = 0;
    printf("Input  : ");
    scanf("%d", &num);
    printf("Output : %s\n", checkPalindrome(num));
    return 0;
}
```

```go
package main

import "fmt"

func reverseInt(n int) int {
	var remainder, reverse int
	for n > 0 {
		remainder = n % 10
		reverse = reverse*10 + remainder
		n /= 10
	}
	return reverse
}

func isPalindrome(n int) bool {
	if n < 0 {
		return false
	}
	if n < 10 {
		return true
	}
	return reverseInt(n) == n
}

func main() {
	var n int

	fmt.Print("Input  : ")
	fmt.Scan(&n)

	if isPalindrome(n) {
		fmt.Println("Output : Palindrome number")
	} else {
		fmt.Println("Output : Not palindrome number")
	}
}
```

```javascript
const reverseInt = function (n) {
  let remainder,
    reverse = 0;
  while (n > 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n = Math.floor(n / 10);
  }
  return reverse;
};

const isPalindrome = function (n) {
  if (n < 0) {
    return false;
  }
  if (n < 10) {
    return true;
  }
  return reverseInt(n) == n;
};

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Input  : ", (n) => {
  if (isPalindrome(n)) {
    console.log("Output : Palindrome number");
    rl.close();
  } else {
    console.log("Output : Not palindrome number");
    rl.close();
  }
});
```

```cs
using System;

namespace SpecialNumbers
{
    public class Palindrome
    {
        public static double Reverse(double number)
        {
            double
                remainder,
                reverse = 0;
            while (number > 0)
            {
                remainder = number % 10;
                reverse = reverse * 10 + remainder;
                number = Math.Floor(number / 10);
            }
            return reverse;
        }

        public static bool IsPalindrome(double number)
        {
            if (number < 0)
            {
                return false;
            }
            if (number < 10)
            {
                return true;
            }
            return number == Reverse(number);
        }

        public static void PalindromeConsoleUtility(double number)
        {
            if (IsPalindrome(number))
            {
                Console.WriteLine("Output : Palindrome number");
            }
            else
            {
                Console.WriteLine("Output : Not palindrome number");
            }
        }

        public static void Main()
        {
            Console.Write("Input  : ");

            double number;
            if (double.TryParse(Console.ReadLine(), out number))
            {
                PalindromeConsoleUtility (number);
            }
            else
            {
                Console.WriteLine("Invalid Input");
            }
        }
    }
}
```

</CodeBlock>
