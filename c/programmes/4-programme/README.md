---
metatitle: Compute and display the value of x=a/(b-c)
description: Given the values of three variables a, b and c, write a program to compute and display the value of x, where x=a/(b-c)
slug: /c/programmes/4
---

### Given the values of three variables a, b and c, write a program to compute and display the value of x, where x=a/(b-c)

---

```c lineNumbers
#include <stdio.h>

void main()
{
    int a = 250, b = 85, c = 25;
    int x = a/(b-c);
    printf("value of x = %d\n", x);
}
```

<br/>

---
