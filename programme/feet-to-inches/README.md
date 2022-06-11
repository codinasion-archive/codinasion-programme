---
title: Feet to Inches
description: Write a programme to convert feet to inches
tags:
  - c
contributors:
  - ClasherKasten
---

## Write a programme to convert feet to inches

```txt
Input  : 1
Output : 12
```


---

<CodeBlock>

```c
#include <stdio.h>

int main(void)
{
  int feet;
  printf("Input  : ");
  scanf("%d", &feet);
  printf("Output : %d\n", feet * 12);
  return 0;
}
```

</CodeBlock>