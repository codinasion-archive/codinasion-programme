---
title: Check Prime Number
description: Write a program to check prime number
image: hero.png
tags:
  - python
  - java
  - c
  - cpp
  - js
  - go
  - cs
contributors:
  - dylan-power
  - karthiksbh
  - NeelPatel31
  - rutterjt
  - MadhuS-1605
  - umaxyon
---

## Write a program to check prime number

```txt
Input  : 7
Output : Prime number
```

---

<CodeBlock>

```python
# check prime number function
def check_prime(num):
    if (num == 0 or num == 1):
        return "Not prime number"
    for i in range(2, num//2+1):
        if num % i == 0:
            return "Not prime number"
    return "Prime number"

# programme driver
n = int(input("Input : "))
print("Output :", check_prime(n))
```

```java
import java.util.*;

public class solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("\nInput: ");
        int n = sc.nextInt();

        if (n == 0 || n == 1) {
            System.out.println("Output: Not prime number");
        } else {
            int temp = 0;
            for (int i = 2; i < n / 2; i++) {
                if (n % i == 0) {
                    temp = 1;
                    break;
                }
            }

            if (temp == 1) {
                System.out.println("Output: Not prime number");
            } else {
                System.out.println("Output: Prime number");
            }
        }
        sc.close();
    }
}
```

```c
#include <stdio.h>
int main()
{
    int a, b = 0;
    printf("Input  : ");
    scanf("%d", &a);
    printf("Output : ");
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            b = 1;
            break;
        }
    }
    if (b == 1)
    {
        printf("Not prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }
    return 0;
}
```

```cpp
#include <iostream>
using namespace std;
int main()
{
    int a, b = 0;
    cout << "Input  : ";
    cin >> a;
    cout << "Output : ";
    if (a == 0 || a == 1)
    {
        cout << "Not prime number\n";
    }
    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                b = 1;
                break;
            }
        }
        if (b == 1)
        {
            cout << "Not prime number\n";
        }
        else
        {
            cout << "Prime number\n";
        }
    }
    return 0;
}
```

```javascript
const isPrime = (n) => {
  if (n <= 1) return false;
  for (let i = 2; i <= Math.sqrt(n); i++) {
    if (n % i === 0) return false;
  }
  return true;
};

const printIsPrime = (n) => {
  console.log(isPrime(n) ? "Prime number" : "Not a prime number");
};

printIsPrime(7);
```

```go
package main

import "fmt"

func main() {
	var n int
	fmt.Print("Enter the number : ")
	fmt.Scan(&n)
	fmt.Println("\nThe number is Prime :", isPrime(n))
}

func isPrime(n int) bool {
	for i := 2; i <= n/2; i++ {
		if n%i == 0 {
			return false
		}
	}
	return true
}
```

```cs
using System;

public class CheckPrimeNumber
{
    public static void Main(string[] args)
    {
        Console.Write("Input  : ");
        if (int.TryParse(Console.ReadLine(), out int num))
        {
            Console.WriteLine("Output : {0} number", IsPrime(num) ? "Prime": "Not prime");
        }
        else
        {
            Console.WriteLine("Input Err");
        }
    }

    public static bool IsPrime(int n)
    {
        if (n < 2) return false;
        else if (n == 2) return true;
        else if (n % 2 == 0) return false;

        double sqrtNum = Math.Sqrt(n);

        for (int i = 3; i <= sqrtNum; i += 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
```

</CodeBlock>
