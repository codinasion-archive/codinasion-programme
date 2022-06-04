---
title: Harmonic Series
description: Write a programme to calculate the sum of following harmonic series for a given value of n
tags:
  - c
  - js
  - python
  - java
  - cpp
contributors:
  - Badboy-16
  - mathcodes
  - ClasherKasten
  - ClasherKasten
  - ClasherKasten
---

## Write a programme to calculate the sum of following harmonic series for a given value of n

```txt
1 + 1/2 + 1/3 + 1/4 + ... + 1/n
```

---

<CodeBlock>

```c
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 32

int hasalpha(char[]);
int ispositiveint(char[]);

int main()
{
    char nstr[MAX];
    int n;
    double sum = 0;

    for (;;)
    {
        printf("Input  : ");
        scanf("%s", nstr);

        if (hasalpha(nstr) || !ispositiveint(nstr))
        {
            printf("Invalid input.\n");
            continue;
        }
        else
            break;
    }
    n = atoi(nstr);
    for (int i = 1; i <= n; sum += 1.0 / i++)
        ;
    printf("Output : %g\n", sum);
    return 0;
}

int hasalpha(char a[])
/* check if char array includes alphabets */
{
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (isalpha(a[i]))
            return 1;
    }
    return 0;
}

int ispositiveint(char a[])
/* check if char array can be converted to a positive integer */
{
    double ndouble;
    int nint;

    ndouble = atof(a);
    nint = atoi(a);

    if (nint > 0 && ndouble == nint)
        return 1;
    else
        return 0;
}
```

```javascript
function sum(n) {
  var i,
    s = 0.0;

  for (i = 1; i <= n; i++) s = s + 1 / i;

  return s.toFixed(2);
}

sum(6);
```

```py
n = int(input('Input  : '))
print(f'Output : {sum(1/i for i in range(1, n+1)):.5f}')
```

```java
import java.util.Scanner;

class HarmonicSeries {
    public static void main(String[] args) {
        int n;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Input  : ");
            n = sc.nextInt();
        } catch (Exception e) {
            System.out.println("An Error occured while reading n");
            e.printStackTrace();
            System.out.println("Setting n=0 to trigger exception...");
            n = 0;
        }
        try {
            double sum = 0;
            for (int i = 1; i <= n; i++) {
                sum += (1.0 / i);
            }
            System.out.println(String.format("Output : %.5f", sum));
        } catch (Exception e) {
            System.out.println("An Error occured while calculation");
            e.printStackTrace();
        }
    }
}
```

```cpp
#include <iostream>

int main(void)
{
    int n;
    double sum = 0;
    std::cout << "Input  : ";
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += (1.0 / i);
    }
    std::cout << "Output : " << sum << std::endl;
    return 0;
}

```

</CodeBlock>
