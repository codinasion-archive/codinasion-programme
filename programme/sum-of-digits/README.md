---
title: Sum of Digits
description: Write a program to print sum of digits
tags:
  - python
  - c
  - cpp
  - java
contributors:
  - PA11TEDDU
  - debaghosh
---

## Write a program to print sum of digits.

```
Input:  2332
Output: 10
```

---

<CodeBlock>

```python
# Input number
n = int(input("Enter the number: "))

# find sum
sum_digits = 0
while n > 0:
    rem = n % 10
    sum_digits += rem
    n = n // 10

print("Sum of digits : ", sum_digits)
```

```c
#include <stdio.h>

int main()
{
    int num, d, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (num != 0)
    {
        d = num % 10;
        sum = sum + d;
        num = num / 10;
    }

    printf("Sum of digits : %d\n", sum);
    return 0;
}
```

```cpp
#include <iostream>
using namespace std;

int main()
{
    int num, d, sum = 0;
    cout << "Enter number : ";
    cin >> num;

    while (num != 0)
    {
        d = num % 10;
        sum = sum + d;
        num = num / 10;
    }

    cout << "Sum of digits : " << sum << endl;
}
```

```java
import java.util.Scanner;

class SumOfDigits {
    public static void main(String[] args) {
        int num, d, sum = 0;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter a number : ");
            num = sc.nextInt();
        }
        while (num != 0) {
            d = num % 10;
            sum = sum + d;
            num = num / 10;
        }
        System.out.println("Sum of the digits : " + sum);
    }
}

```

</CodeBlock>
