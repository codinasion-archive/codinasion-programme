---
title: Check armstrong number
description: Write a program to check armstrong number
image: hero.png
tags:
  - c
  - java
  - python
  - cs
  - js
  - go
  - cpp
contributors:
  - Badboy-16
  - kzhang01
  - vaishnavikumar8
  - Dentyr
  - rossilor95
  - ClasherKasten
---

## Write a program to check armstrong number

Armstrong number is a number that is equal to the sum of cubes of length of its digits.

### Examples

- 0 = 0^1
- 1 = 1^1
- 153 = 1^3 + 5^3 + 3^3
- 370 = 3^3 + 7^3 + 0^3
- 9474 = 9^4 + 4^4 + 7^4 + 4^4

### Programme

```txt
Input:  153
Output: armstrong number
```

```txt
Input:  121
Output: not a armstrong number
```

---

<CodeBlock>

```c
#include <stdio.h>
#include <stdlib.h> /* for atoi function */
#include <ctype.h>  /* for isdigit and isspace functions */
#include <string.h>
#include <math.h>

#define LIMIT 32

int isarmstrong(int, int);
int validinput(char[]);

int main()
{
  char numstr[LIMIT];
  int num;

  printf("Input  : ");
  for (;;)
  {
    scanf("%s", numstr);
    if (validinput(numstr))
      break;
    else
      printf("\nInvalid input.\nInput:  ");
  }
  int len = strlen(numstr);
  num = atoi(numstr);
  if (isarmstrong(num, len))
    printf("Output : armstrong number\n");
  else
    printf("Output : not a armstrong number\n");
  return 0;
}

int isarmstrong(int i, int len)
/* check if int is armstrong number */
{
  int num = i;
  int sum;
  for (sum = 0; num != 0; num /= 10)
    sum += pow(num % 10, len);
  return (sum == i) ? 1 : 0;
}

int validinput(char a[])
/* check if char array can be converted to non-negative int */
{
  int i = 0;
  while (isspace(a[i]))
    i++;
  if (!isdigit(a[i]))
    return 0;
  while (isdigit(a[i]))
    i++;
  if (a[i] != '\0' && !isspace(a[i]))
    return 0;
  else if (a[i] == '\0')
    return 1;
  while (isspace(a[i]))
    i++;
  return (a[i] == '\0') ? 1 : 0;
}
```

```java
import java.util.Scanner;

public class ArmstrongNumber {
    private static String isArmstrong(int num, int length) {
        int sum = 0;
        for (int currNum = num; currNum != 0; currNum /= 10) {
            sum += Math.pow(currNum % 10, length);
        }
        return sum == num ? "armstrong number" : "not armstrong number";
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an integer : ");
        int num = sc.nextInt();
        int length = String.valueOf(num).length();
        System.out.println("\nOutput : " + isArmstrong(num, length));
        sc.close();
    }
}
```

```python
num = input("Input  : ")

length = len(num)
number = int(num)

sum = 0

temp = number
while temp > 0:
    digit = temp % 10
    sum += digit ** length
    temp //= 10

output = "armstrong number" if number == sum else "not a armstrong number"
print("Output :", output)
```

```cs
using System;

public class ArmstrongNumber
{
    public static bool IsArmstrongNumber(int num)
    {
        int sum = 0;
        for (int temp = num; temp > 0; temp /= 10)
        {
            sum += ((int)Math.Pow(temp % 10, numDigits(num)));
        }
        if (num == sum) return true; return false;
    }
    public static int numDigits(int num)
    {
        if (num == 0) return 1;
        return ((int)Math.Floor(Math.Log10(num))) + 1;
    }
    public static void Main(string[] args)
    {
        Console.Write("Input  : ");
        Console.WriteLine(
            IsArmstrongNumber(int.Parse(Console.ReadLine())) ?
            "Output : Is an Armstrong number" : "Output : Not an Armstrong number"
        );
    }
}
```

```javascript
const countDigits = function (number) {
  let numberOfDigits = 0;
  while (number > 0) {
    number = Math.floor(number / 10);
    numberOfDigits++;
  }
  return numberOfDigits;
};

const requiredSum = function (number) {
  const numberOfDigits = countDigits(number);
  let sum = 0;
  while (number > 0) {
    digit = number % 10;
    number = Math.floor(number / 10);
    sum += Math.pow(digit, numberOfDigits);
  }
  return sum;
};

const isArmstrong = function (number) {
  const sum = requiredSum(number);
  return number === sum;
};

const readline = require("readline");
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter an integer : ", (userInput) => {
  console.log(`\nInput  : ${userInput}`);
  const num = Number.parseInt(userInput);
  if (!isNaN(num)) {
    answer = isArmstrong(num)
      ? "Output : armstrong number"
      : "Output : not an armstrong number";
    console.log(answer);
    rl.close();
  } else {
    console.log("Invalid input: the input is not a number.");
    rl.close();
  }
});
```

```go
package main

import "fmt"

func countDigits(number int) int {
	var numberOfDigits int = 0
	for number > 0 {
		number /= 10
		numberOfDigits++
	}
	return numberOfDigits
}

func intPow(base, exponent int) int {
	if exponent == 0 {
		return 1
	}
	var result int = base
	for i := 2; i <= exponent; i++ {
		result *= base
	}
	return result
}

func requiredSum(number int) int {
	var numberOfDigits int = countDigits(number)
	var sum int = 0
	for number > 0 {
		var digit int = number % 10
		number /= 10
		sum += intPow(digit, numberOfDigits)
	}
	return sum
}

func isArmstrong(number int) bool {
	return number == requiredSum(number)
}

func main() {
	var num int
	fmt.Print("Enter an integer: ")
	fmt.Scan(&num)
	fmt.Println("\nInput  :", num)
	if isArmstrong(num) {
		fmt.Println("Output : armstrong number")
	} else {
		fmt.Println("Output : not an armstrong number")
	}
```

```cpp
#include <iostream>
#include <cmath>

bool isArmstrongNumber(int n)
{
    int cache = n;
    int length = log10(n) + 1;
    int asum = 0;
    for (int i = 0; i < length; i++)
    {
        asum += pow(n % 10, length);
        n = n / 10;
    }
    return cache == asum;
}

int main(void)
{
    int n;
    std::cout << "Input  : ";
    std::cin >> n;
    if (isArmstrongNumber(n))
    {
        std::cout << "Output : Amstrong number" << std::endl;
    }
    else
    {
        std::cout << "Output : Not a armstrong number" << std::endl;
    }
    return 0;
}
```

</CodeBlock>
