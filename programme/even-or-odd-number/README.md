---
title: Even or Odd
description: Write a programme to check a number even or odd
image: hero.png
tags:
  - java
contributors:
  - nikhilnarla
---

## Write a programme to check a number even or odd

```txt
Input  : 3
Output : Odd Number
```

```txt
Input  : 2
Output : Even Number
```

---

<CodeBlock>

```java
import java.util.Scanner;

public class EvenOrOdd {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int num;

    System.out.print("Enter the number : ");
    num = sc.nextInt();

    if (num % 2 == 0) System.out.println(
      "\nOutput : Even Number"
    ); else System.out.println("\nOutput : Odd Number");

    sc.close();
  }
}
```

</CodeBlock>
