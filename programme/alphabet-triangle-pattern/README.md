---
title: Number triangle pattern
description: Write a program to print number triangle pattern
tags:
  - c
  - cpp
  - python
  - java
contributors:
  - NeelPatel31
---

## Write a program to print alphabet triangle pattern.

```
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

</CodeBlock>
