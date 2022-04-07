## Write a program to get the factorial of a number.

```
Input:  5
Output: 120
```

---

<CodeBlock slots="heading, code" repeat="3" languages="Python, Java, C" />

#### Python

```python
# recursive factorial function
def factorial(n):
    if n == 1 or n == 0:
        return 1
    else:
        return n*factorial(n-1)

n = int(input("Input:"))
print("Output: ", factorial(n))
```

#### Java

```java
import java.util.Scanner;

class Factorial {
    public static void main(String args[]) {
        // Input from User
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        double number = sc.nextInt();

        // output
        int i, fact = 1;
        for (i = 1; i <= number; i++) {
            fact = fact * i;
        }
        System.out.println("Output: " + fact);
    }
}
```

#### C

```c
// Write a program to print factorial of a number
#include <stdio.h>
#include <stdlib.h> /* for atoi and atof function */

#define LIMIT 32 /* longest input allowed */

int factorial(int);

int main()
{
  int input;
  double inputdouble;
  char inputstr[LIMIT];

  printf("Input  : ");
  for (;;)
  {
    scanf("%s", inputstr);
    input = atoi(inputstr);
    inputdouble = atof(inputstr);
    if (input == inputdouble && input >= 1)
      break;
    else
    {
      printf("\nInvalid input.\nInput  : ");
      continue;
    }
  }
  printf("\nOutput : %d\n", factorial(input));
  return 0;
}

int factorial(int n)
{
  int result = 1;
  for (int i = n; i > 0; i--)
    result *= i;
  return result;
}
```
