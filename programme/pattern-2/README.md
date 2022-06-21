---
title: Print pattern
description: Write a programme to print the given pattern
image: hero.png
tags:
  - python
  - c
  - cpp
  - java
  - js
  - go
contributors:
  - yacine-zitouni
  - NeelPatel31
  - rutterjt
  - umaxyon
---

## Write a program to print the given pattern

```txt
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
```

---

<CodeBlock>

```python
# print pattern function
def printPattern(n):
    # print the top half of the pattern
    for i in range(1,n+1):
        print((i*"* ").rjust(n+i))
    # print the last half of the pattern
    for i in reversed(range(1,n)):
        print((i*"* ").rjust(n+i))

# test
printPattern(5)
```

```c
#include <stdio.h>

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 1; i < n; i++)
    {
        for (int l = 1; l <= i; l++)
        {
            printf(" ");
        }
        for (int m = n; m > i; m--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Input : ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
```

```cpp
#include <iostream>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = n - 1; j > i - 1; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int a;
    cout << "Input : ";
    cin >> a;
    pattern(a);
    return 0;
}
```

```java
import java.util.Scanner;

public class solution {
    public static void pattern(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j > i; j--) {
                System.out.print(" ");
            }
            for (int k = 0; k <= i; k++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        for (int i = 1; i < n; i++) {
            for (int k = 1; k <= i; k++) {
                System.out.print(" ");
            }
            for (int j = n - 1; j > i - 1; j--) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input : ");
        int a = sc.nextInt();
        pattern(a);
        sc.close();
    }
}
```

```javascript
const printPatternTwo = (n) => {
  for (let i = 1; i < n * 2; i++) {
    let stars = i <= n ? i : n * 2 - i;
    let offsetSpaces = n - stars;
    console.log(" ".repeat(offsetSpaces) + "* ".repeat(stars));
  }
};

printPatternTwo(3);
```

```go
package main

import (
	"fmt"
	"strconv"
)

func main() {
	var str string

	fmt.Print("Input : ")
	fmt.Scan(&str)

	num, err := strconv.Atoi(str)
	if err != nil || num < 0 {
		fmt.Printf("Input error: %s", str)
		return
	}

	for i := 1; i < num*2; i++ {
		var stars int
		if i <= num {
			stars = i
		} else {
			stars = num*2 - i
		}

		for offset := num - stars; offset > 0; offset-- {
			fmt.Print(" ")
		}
		for ; stars > 0; stars-- {
			fmt.Print("* ")
		}
		fmt.Println()
	}
}
```

</CodeBlock>
