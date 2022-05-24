---
title: Multiply two numbers
description: Write a programme to multiply two numbers
tags:
  - python
  - c
contributors:
  - Shahzeb-A
  - ClasherKasten
---

## Write a programme to multiply two numbers

```txt
Input:  5 4
Output: 20
```

---

<CodeBlock>

```python
# input first number
a = int(input('Write the first number'))

# input second number
b = int(input('Write the second number'))

# output
print('The output is ', a*b)
```

```c
#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    int product = a * b;

    printf("\n%d * %d = %d\n", a, b, product);
    return 0;
}
```

</CodeBlock>
