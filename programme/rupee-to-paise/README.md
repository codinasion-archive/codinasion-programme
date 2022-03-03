## Write a program to convert rupee to paise

```
Input:  15.95
Output: 1595
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python" />

#### Python

```python
# input in rupee ( can be both decimal or integer value)
x=float(input('Input: '))

# output in paise
print('Output: ',int(x*100))
```
---

<CodeBlock slots="heading, code" repeat="2" languages="C" />

#### C

```C
#include <stdio.h>

int main () {
    float x;
    scanf ("%g",&x); //reads input in rupee
    printf ("%g\n",x*100); //prints result in paise
    return 0;
}
```
