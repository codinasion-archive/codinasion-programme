---
title: Inches to Feet
description: Write a programme to convert inches to feet
tags:
  - c
contributors:
  - ClasherKasten
---

## Write a programme to convert inches to feet

```txt
Input  : 12
Output : 1
```

---

<CodeBlock>

```c
#include <stdio.h>

int main(void)
{
    int inch;
    printf("Input  : ");
    scanf("%d", &inch);
    printf("Output : %f\n", inch / 12.0);
    return 0;
}
```

</CodeBlock>
