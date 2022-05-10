---
title: Print Even Numbers
description: Write a programme to print first n even numbers
tags:
  - python
  - java
contributors:
  - PA11TEDDU
  - Anzo52
---

## Write a programme to print first n even numbers

```txt
Input: 5
Output: 0 2 4 6 8
```

---

<CodeBlock>

```python
n = int(input("Enter n : "))
for i in range(0, 2*n):
    if(i % 2 == 0):
        print(i, end=" ")
```

```java
import java.util.Scanner;

public class PrintEven {
  public static int[] printEven(int num) {
    int[] arr = new int[num];
    int i = 0;
    while (i < num) {
      arr[i] = i * 2;
      i++;
    }
    return arr;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Input  : ");
    int num = sc.nextInt();
    int[] arr = printEven(num);
    System.out.print("Output : ");
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();
    sc.close();
  }
}
```

</CodeBlock>
