---
title: Factorial of a number
description: Write a program to get the factorial of a number
image: hero.png
tags:
  - python
  - java
  - c
  - js
  - cpp
  - go
contributors:
  - harshi1122
  - KikiManjaro
  - Badboy-16
  - michal-markiewicz
  - akhil484
  - MadhuS-1605
---

## Write a program to find the factorial of a number

```txt
Input:  5
Output: 120
```

---

<CodeBlock>

```python
# recursive factorial function
def factorial(n):
    if n == 1 or n == 0:
        return 1
    else:
        return n*factorial(n-1)

n = int(input("Input:"))
print("Output: ", factorial(n))
```

```java
import java.util.Scanner;

class Factorial {
    public static void main(String args[]) {
        // Input from User
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        double number = sc.nextInt();

        // output
        int i, fact = 1;
        for (i = 1; i <= number; i++) {
            fact = fact * i;
        }
        System.out.println("Output: " + fact);
    }
}
```

```c
#include <stdio.h>
#include <stdlib.h> /* for atoi and atof function */

#define LIMIT 32 /* longest input allowed */

int factorial(int);

int main()
{
  int input;
  double inputdouble;
  char inputstr[LIMIT];

  printf("Input  : ");
  for (;;)
  {
    scanf("%s", inputstr);
    input = atoi(inputstr);
    inputdouble = atof(inputstr);
    if (input == inputdouble && input >= 1)
      break;
    else
    {
      printf("\nInvalid input.\nInput  : ");
      continue;
    }
  }
  printf("\nOutput : %d\n", factorial(input));
  return 0;
}

int factorial(int n)
{
  int result = 1;
  for (int i = n; i > 0; i--)
    result *= i;
  return result;
}
```

```javascript
function factorial(num) {
  if (num === 1) {
    return 1;
  } else {
    return num * factorial(num - 1);
  }
}

var num = 5;

console.log(factorial(num));
```

```cpp
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Input : ";
    cin >> number;
    int factorial_of_number = 1;
    for (int i = 1; i <= number; i++)
    {
        factorial_of_number = factorial_of_number * i;
    }
    cout << "\nFactorial of " << number << " is " << factorial_of_number << endl;
    return 0;
}
```

```go
package main

import (
	"fmt"
	"math/big"
)

func main() {
	var n int
	fmt.Print("Enter a number : ")
	fmt.Scan(&n)
	fmt.Println("\nFactorial of", n, "is", factorial(n))
}
func factorial(n int) *big.Int {
	var fact *big.Int = big.NewInt(1)
	for i := 1; i <= n; i++ {
		fact.Mul(fact, big.NewInt(int64(i)))
	}
	return fact
}
```

</CodeBlock>
