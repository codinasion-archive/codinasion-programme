---
title: Swap two numbers
description: Write a program to swap two numbers
image: hero.png
tags:
  - python
  - c
contributors:
  - johnelbacani
  - NeelPatel31
---

## Write a program to swap two numbers

```txt
Input:  a=10 b=20
Output: a=20 b=10
```

---

<CodeBlock>

```python
# define variables
a = 10
b = 20

# swap numbers
c = a
a = b
b = c

# print result
print(a, b)
```

```c
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("\nOutput: a = %d , b = %d\n", a, b);
    return 0;
}
```

</CodeBlock>
