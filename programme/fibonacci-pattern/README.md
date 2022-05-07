---
title: Fibonacci Pattern
description: Write a program to print Fibonacci pattern
tags:
  - java
contributors:
  - Anzo52
---

## Write a program to print Fibonacci pattern

```txt
Input  : 5
Output :

1
1 1
1 1 2
1 1 2 3
1 1 2 3 5
```

---

<CodeBlock>

```java
import java.util.Scanner;

public class FibonacciPattern {

    public static int fibonacci(int n) {
        return n = (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an integer : ");
        int n = sc.nextInt();
        System.out.println();
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(fibonacci(j) + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}
```

</CodeBlock>
