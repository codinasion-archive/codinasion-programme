---
title: Print Pattern 3
description: Write a programme to print the given pattern
tags:
  - python
  - c
contributors:
  - seraph776
  - ClasherKasten
---

## Write a python programme to print the given pattern

```txt
Input  : 5
Output :

x x x x x
x       x
x       x
x       x
x x x x x

```

<CodeBlock>

```python
def print_pattern(n: int) -> None:
    print("Output : \n")
    for col in range(n):
        for row in range(n):
            if col == 0 or col == n - 1 or row == 0 or row == n - 1:
                print(' * ', end='')
            else:
                print('   ', end='')
        print()


n = int(input("input  : "))
print_pattern(n)
```

```c
#include <stdio.h>

#define BOUNDARY_STR ("x")

void pattern(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("%s ", BOUNDARY_STR);
    }
    printf("%s\n", BOUNDARY_STR);
    for (int i = 0; i < n - 2; i++)
    {
        printf(BOUNDARY_STR);
        for (int i = 0; i < n - 2; i++)
        {
            printf("  ");
        }
        printf(" %s\n", BOUNDARY_STR);
    }
    if (n != 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            printf("%s ", BOUNDARY_STR);
        }
        printf("%s\n", BOUNDARY_STR);
    }
}

int main(void)
{
    int n;
    printf("Input : ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
```

</CodeBlock>
