---
title: X power Y
description: Write a program to find X power Y
image: hero.png
tags:
  - python
  - c
contributors:
  - harshi1122
  - ClasherKasten
---

## Write a program to find X power Y

```txt
Input:  2 4
Output: 16
```

---

<CodeBlock>

```python
# input
x, y = input("Input: ").split()

# output
print('Output: ', int(x)**int(y))
```

```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x, y;
    printf("Input  : ");
    scanf("%lf %lf", &x, &y);
    printf("Output : %d\n", (int)pow(x, y));
    return 0;
}
```

</CodeBlock>
