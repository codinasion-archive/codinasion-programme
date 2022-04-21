## Write a Python programme to find perimeter of rectangle

Perimeter of rectangle = 2 * ( ` length ` + ` breadth ` )

```
length  : 12
breadth : 2

perimeter : 28
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, C" />

#### Python

```python
length = int(input("length  : "))
breadth = int(input("breadth : "))

print(f"\nperimeter : {2*(length + breadth)}")
```

#### C

```c
#include <stdio.h>

int main()
{
  double length, breadth, perimeter;

  printf("length: ");
  scanf("%lf", &length);
  printf("breadth: ");
  scanf("%lf", &breadth);

  perimeter = 2 * (length + breadth);
  printf("perimeter: %g", perimeter);
  return 0;
}
```
