## Write a program to compute the area of a rhombus

```
Diagonal 1 : 6
Diagonal 2 : 8

Area : 24
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, C" />

#### Python

```python
diagonal1 = int(input('Diagonal 1 : '))
diagonal2 = int(input('Diagonal 2 : '))

area = diagonal1 * diagonal2 * 0.5
print('\nArea : ', area)
```

#### C

```c
#include <stdio.h>

float getD1();
float getD2();

int main()
{
    float d1 = getD1();
    float d2 = getD2();
    float ans = (d1 * d2) / 2;
    printf("\nArea of rhombus : %.2f\n", ans);
    return 0;
}
float getD1()
{
    float x;
    printf("Diagonal 1 : ");
    scanf("%f", &x);
    return x;
}

float getD2()
{
    float y;
    printf("Diagonal 2 : ");
    scanf("%f", &y);
    return y;
}
```
