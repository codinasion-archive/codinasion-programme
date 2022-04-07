## Write a programme to find perimeter of square

Perimeter of square = 4 * `side`

```
side : 4

perimeter : 16
```

<CodeBlock slots="heading, code" repeat="1" languages="C" />

#### C

```c
#include <stdio.h>
#include <stdlib.h> /* for atof function */

int main()
{
  double side, perimeter;
  char sidestr[32];

  printf("Enter length of side : ");
  for (;;)
  { /* get user input until input is valid */
    scanf("%s", sidestr);
    side = atof(sidestr);
    if (side <= 0)
    {
      printf("\nInvalid input.\n\nEnter length of side : ");
      continue;
    }
    else
      break;
  }
  perimeter = 4 * side;
  printf("Perimeter : %g\n", perimeter);
  return 0;
}

```
