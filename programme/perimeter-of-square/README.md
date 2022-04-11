## Write a programme to find perimeter of square

Perimeter of square = 4 * `side`

```
side : 4

perimeter : 16
```

<CodeBlock slots="heading, code" repeat="3" languages="C, Python, C++" />

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

#### Python

```python
side = int(input("side : "))
print(f"\nperimeter : {side * 4}")
```

#### C++

```cpp
#include <iostream>
// this namespace function allows you to skip
// over the "std::".
using namespace std;

int main()
{
    // set up the variables for the two values
    int side;
    int perimeter;

    // getting the user input for the size of their side
    cout << "Side : ";
    cin >> side;

    // calculating the perimeter
    perimeter = side * 4;

    // printing out the result
    cout << "Perimeter : " << perimeter << endl;
}
```
