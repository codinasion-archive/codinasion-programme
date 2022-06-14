---
title: Fibonacci Series using recursion
description: Write a program to print the Fibonacci series for 'n' numbers using recursion
image: hero.png
tags:
  - python
  - c
  - java
  - cpp
  - js
  - go
contributors:
  - harshi1122
  - Shivam-Shrivastav
  - Prabs09
  - rgodoy86
  - rutterjt
  - umaxyon
---

## Write a program to print the Fibonacci series for 'n' numbers

```txt
Input  : 10
Output : 0 1 1 2 3 5 8 13 21 34
```

---

<CodeBlock>

```python
# Function to print the Fibonacci series
def Fib(n):
    if n==0:
        return 0
    if n==1:
        return 1
    else:
        return (Fib(n-1)+Fib(n-2))

# Input
n=int(input("Input: "))

# These line print the Output while ensuring that all the numbers are displayed on one line
print('Output: ',end ='')
for i in range(n):
    print(Fib(i),end =' ')
```

```c
#include <stdio.h>
int fibonacci(int);
int main()
{
    int n, i;
    printf("Input  : ");
    scanf("%d", &n);
    printf("Output : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

int fibonacci(int i)
{
    if (i == 0)
        return 0;
    else if (i == 1)
        return 1;
    else
        return (fibonacci(i - 1) + fibonacci(i - 2));
}
```

```java
import java.util.Scanner;

class Fiborecursion {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int num = sc.nextInt();

        System.out.print("Fibonacci Series :");
        for (int i = 0; i <= num; i++) {
            System.out.print(" " + fibo(i));
        }
        System.out.println();
    }

    static int fibo(int num) {
        if (num < 2) {
            return num;
        }
        return fibo(num - 1) + fibo(num - 2);
    }
}
```

```cpp
#include <iostream>
#include <map>

// Big O - Time and Space Complexity
// O(n) Time (because of the cache, otherwise time complexity would be O(2^n)
// O(n) Space

// Find the N-th Fibonacci number
static unsigned long int fib(unsigned int n)
{
  // Cache with all the N values already calculated
  static std::map<unsigned int, unsigned long int> cache = {{0, 0}, {1, 1}};

  // Return fib(0) = 0
  if (n == 0)
    return 0;
  // Return fib(1) = 1
  if (n == 1)
    return 1;
  // Return known fib(n) to avoid extra recursive steps
  if (cache.count(n) > 0)
    return cache.at(n);

  // Save the new fib(n) into the map
  cache.insert({n, fib(n - 1) + fib(n - 2)});

  // Return the fib(n)
  return fib(n - 1) + fib(n - 2);
}

int main()
{
  unsigned int n;
  std::cout << "Choose how many N fibonacci numbers you would like to see: ";
  std::cin >> n;

  for (unsigned int pos = 0; pos < n; pos++)
  {
    std::cout << fib(pos) << " ";
  }
  std::cout << std::endl;
  return 0;
}
```

```javascript
const fib = (n) => {
  if (n === 0) return 0;
  if (n <= 2) return 1;
  return fib(n - 1) + fib(n - 2);
};

const printFibs = (n) => {
  let str = "";
  for (let i = 0; i < n; i++) {
    str += `${fib(i)} `;
  }
  console.log(str);
};

printFibs(10);
```

```go
package main

import (
	"fmt"
	"strconv"
)

func fib(n int) int {
	switch n {
	case 0, 1:
		return n
	default:
		return fib(n-1) + fib(n-2)
	}
}

func main() {
	var str string

	fmt.Print("Input Number : ")
	fmt.Scan(&str)

	num, err := strconv.Atoi(str)
	if err != nil || num < 0 {
		fmt.Printf("Input error: %s", str)
		return
	}

	fmt.Print("\nOutput : ")
	for i := 0; i < num; i++ {
		fmt.Printf("%d ", fib(i))
	}
	fmt.Print("\n")
}
```

</CodeBlock>
