## Write a program to convert rupee to paise

```
Input:  15.95
Output: 1595
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, C" />

#### Python

```python
# input in rupee ( can be both decimal or integer value)
x=float(input('Input: '))

# output in paise
print('Output: ',int(x*100))
```

#### C

```c
#include <stdio.h>

int main()
{
    float x;

    // input in rupees
    printf("Amount in Rupees : ");
    scanf("%g", &x);

    // output in paise
    printf("Amount in Paise : %g\n", x * 100);
    return 0;
}
```
