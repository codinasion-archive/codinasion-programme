---
title: Simple Interest Calculator
description: Write a programme to calculate simple interest
tags:
  - java
  - python
  - c
contributors:
  - Anzo52
  - Zuquim
  - ClasherKasten
---

## Write a programme to calculate simple interest

```txt
Enter P : 5000
Enter T : 10
Enter R : 5

Simple Interest : 2500
```

---

<CodeBlock>

```java
import java.util.Scanner;

public class SimpleInterestCalculator {

    public static int interestCalculator(int principle, int time, int rate) {
        int interest = (principle * time * rate) / 100;
        return interest;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter P : ");
        int principle = sc.nextInt();
        System.out.print("Enter T : ");
        int time = sc.nextInt();
        System.out.print("Enter R : ");
        int rate = sc.nextInt();
        int interest = interestCalculator(principle, time, rate);
        System.out.println("\nSimple interest: " + interest);
        sc.close();
    }
}
```

```python
p = int(input("Enter P : "))
t = int(input("Enter T : "))
r = int(input("Enter R : "))

print(f"\nSimple Interest : {p * t * r / 100}")
```

```c
#include <stdio.h>

int simple_interest(int p, int t, int r)
{
    return (int)(p * t * r / 100);
}

int main(void)
{
    int p, t, r;
    printf("Enter P : ");
    scanf("%d", &p);
    printf("Enter R : ");
    scanf("%d", &r);
    printf("Enter T : ");
    scanf("%d", &t);
    printf("\nSimple Interest : %d\n", simple_interest(p, t, r));
    return 0;
}
```

</CodeBlock>
