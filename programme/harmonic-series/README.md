---
title: Harmonic Series
description: Write a programme to calculate the sum of following harmonic series for a given value of n
tags:
  - c
contributors:
  - Badboy-16
---

## Write a programme to calculate the sum of following harmonic series for a given value of n.

```
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

</CodeBlock>
