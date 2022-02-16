## Write a c program to swap two numbers without using third variable.

```
Input:  a=10 b=20
Output: a=20 b=10
```

---

```c
#include <stdio.h>

int main()
{
  //initialize two numbers
  int number1, number2;
  printf("enter two numbers ");

  // taking input from user
  scanf("%d %d", &number1, &number2);

  //swapping the numbers
  number1 = number1 + number2;
  number2 = number1 - number2;
  number1 = number1 - number2;

  //after swapping output
  printf("after swap two numbers are %d and %d", number1, number2);

  return 0;
}
```
