## Write a program to print the Fibonacci series for 'n' numbers

```
Input: 10
Output: 0 1 1 2 3 5 8 13 21 34
```
---

#### JAVA

```java

import java.util.Scanner;

class Fiborecursion {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter a number: ");
        int num = sc.nextInt();
        for (int i = 0; i <= num; i++) {
            System.out.println(fibo(i));
        }
    }

    static int fibo(int num) {
        if (num < 2) {
            return num;
        }
        return fibo(num - 1) + fibo(num - 2);
    }
}

```