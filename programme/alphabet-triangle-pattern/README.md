---
title: Alphabet triangle pattern
description: Write a program to print alphabet triangle pattern
image: hero.png
tags:
  - c
  - cpp
  - python
  - java
  - go
  - cs
  - js
contributors:
  - NeelPatel31
  - shrionit
  - GodKimba
  - Dentyr
  - rutterjt
---

## Write a program to print alphabet triangle pattern

```txt
Input : 5
Output:
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
```

---

<CodeBlock>

```c
#include <stdio.h>

void pattern(int a)
{
  printf("Output :\n");
  for (int i = 1; i <= a; i++)
  {
    int c = 65;
    for (int k = a; k > i; k--)
    {
      printf(" ");
    }
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      if (j < i)
      {
        printf("%c", c);
        c++;
      }
      else
      {
        printf("%c", c);
        c--;
      }
    }
    printf("\n");
  }
}
int main()
{
  int a;
  printf("Input : ");
  scanf("%d", &a);
  pattern(a);
  return 0;
}
```

```cpp
#include <iostream>
using namespace std;

void pattern(int a)
{
  cout << "Output :\n";
  for (int i = 1; i <= a; i++)
  {
    int c = 65;
    for (int k = a; k > i; k--)
    {
      cout << " ";
    }
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      if (j < i)
      {
        printf("%c", c);
        c++;
      }
      else
      {
        printf("%c", c);
        c--;
      }
    }
    cout << "\n";
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

```python
def pattern(a):
    print("Output :")
    for i in range(1, a + 1):
        c = 65
        for k in range(a, i, -1):
            print(" ", end="")
        for j in range(1, 2 * i):
            if j < i:
                print(chr(c), end="")
                c += 1
            else:
                print(chr(c), end="")
                c -= 1
        print()


a = int(input("Input  : "))
pattern(a)
```

```java
import java.util.Scanner;

public class alphabet_triangle_pattern {
    private static void pattern(int a) {
        System.out.print("Output :\n");
        for (int i = 1; i <= a; i++) {
            int c = 65;
            for (int k = a; k > i; k--) {
                System.out.print(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                if (j < i) {
                    System.out.printf("%c", c);
                    c++;
                } else {
                    System.out.printf("%c", c);
                    c--;
                }

            }
            System.out.print("\n");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input  : ");
        int a = sc.nextInt();
        pattern(a);
        sc.close();
    }

}
```

```go
package main
import (
	"fmt"
)
func createTrianglePattern() {
	var rows int
	fmt.Print("Enter the number of rows: ")
	fmt.Scan(&rows)
	for i := 0; i < rows; i++ {
		asciiLetter := 65
		for k := rows; k > i; k-- {
			fmt.Print(" ")
		}
		for j := 0; j < 2*i+1; j++ {
			if j <= i {
				fmt.Printf("%c", asciiLetter)
				asciiLetter += 1
			} else {
				asciiLetter -= 1
				fmt.Printf("%c", asciiLetter-1)
			}
		}
		fmt.Println()
	}
}
func main() {
	createTrianglePattern()
}
```

```cs
using System;

public class AlphabetTrianglePattern
{
    private static void pattern(int n)
    {
        Console.WriteLine("Output :");
        for (int i = 1; i <= n; i++)
        {
            int c = (int)('A');
            for (int k = n; k > i; k--)
            {
                Console.Write(" ");
            }
            for (int j = 1; j < 2 * i; j++)
            {
                Console.Write(((char)c));
                if (j < i)
                {
                    c++;
                }
                else
                {
                    c--;
                }
            }
            Console.WriteLine();
        }
    }
    public static void Main(String[] args)
    {
        Console.Write("Input  : ");
        int n = int.Parse(Console.ReadLine());
        pattern(n);
    }
}
```

```javascript
const alphabetTriangle = (length) => {
  for (let l = 0; l < length; l++) {
    let char = 65 + l,
      str = String.fromCodePoint(char);
    for (let c = 0; c < length - 1; c++) {
      char--;
      let newChar = char < 65 ? " " : String.fromCodePoint(char);
      str = newChar + str + newChar;
    }
    console.log(str);
  }
};

alphabetTriangle(5);
```

</CodeBlock>
