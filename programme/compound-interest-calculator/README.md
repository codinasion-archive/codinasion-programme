---
title: Compound Interest Calculator
description: Write a programme to calculate compound interest
tags:
  - python
  - java
contributors:
  - theanorak
  - KikiManjaro
---

## Write a programme to calculate compound interest.

```txt
Enter P : 100
Enter T : 10
Enter R : 10

Amount : 259.37
Compound Interest : 159.37
```

---

<CodeBlock>

```python
# Input from User
p = int(input("Enter Principle Amount : "))
t = int(input("Enter Time Period : "))
r = int(input("Enter Rate of Interest : "))

# output
print('Amount : ', (round((p*((1+(r/100))**t)), 2)))
print('Compound Interest : ', (round((p*((1+(r/100))**t)) - p, 2)))
```

```java
import java.util.Scanner;

public class solution {
    public static void main(String args[]) {
        try (
                Scanner sc = new Scanner(System.in)) {
            // Input from User
            System.out.print("Enter Principle Amount : ");
            double p = sc.nextInt();
            System.out.print("Enter Time Period : ");
            double t = sc.nextInt();
            System.out.print("Enter Rate of Interest : ");
            double r = sc.nextInt();

            // output
            double amount = (double) (p * Math.pow(1 + (r / 100), t));
            System.out.println();
            System.out.println("Amount : " + Math.round(amount * 100.0) / 100.0);
            System.out.println("Compound Interest : " + Math.round((amount - p) * 100.0) / 100.0);
        }
    }
}
```

</CodeBlock>
