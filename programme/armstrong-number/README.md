## Write a program to check armstrong number

Armstrong number is a number that is equal to the sum of cubes of its digits.

### Examples

- `0` = `0^3`
- `1` = `1^3`
- `153` = `1^3 + 5^3 + 3^3`
- `370` = `3^3 + 7^3 + 0^3`

### Programme

```
Input:  153
Output: armstrong number
```
```
Input:  121
Output: not a armstrong number
```

---

<CodeBlock slots="heading, code" repeat="3" languages="C, Java, Python" />

#### C

```c
#include <stdio.h>
#include <stdlib.h> /* for atoi function */
#include <ctype.h>  /* for isdigit and isspace functions */

#define LIMIT 32

int isarmstrong(int);
int cube(int);
int validinput(char[]);

int main()
{
  char numstr[LIMIT];
  int num;

  printf("Input  : ");
  for (;;)
  {
    scanf("%s", numstr);
    if (validinput(numstr))
      break;
    else
      printf("\nInvalid input.\nInput:  ");
  }
  num = atoi(numstr);
  if (isarmstrong(num))
    printf("Output : armstrong number\n");
  else
    printf("Output : not a armstrong number\n");
  return 0;
}

int isarmstrong(int i)
/* check if int is armstrong number */
{
  int num = i;
  int sum;
  for (sum = 0; num != 0; num /= 10)
    sum += cube(num % 10);
  return (sum == i) ? 1 : 0;
}

int cube(int i)
/* return the cubed int */
{
  return i * i * i;
}

int validinput(char a[])
/* check if char array can be converted to non-negative int */
{
  int i = 0;
  while (isspace(a[i]))
    i++;
  if (!isdigit(a[i]))
    return 0;
  while (isdigit(a[i]))
    i++;
  if (a[i] != '\0' && !isspace(a[i]))
    return 0;
  else if (a[i] == '\0')
    return 1;
  while (isspace(a[i]))
    i++;
  return (a[i] == '\0') ? 1 : 0;
}
```

#### Java

```java
import java.util.Scanner;

public class Armstrong {
    private static String isArmstrong(int num) {
        int sum = 0;
        for (int currNum = num; currNum != 0; currNum /= 10) {
            sum += Math.pow(currNum % 10, 3);
        }
        return sum == num ? "armstrong number" : "not armstrong number";
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an integer : ");
        int num = sc.nextInt();
        System.out.println("\nOutput : " + isArmstrong(num));
        sc.close();
    }
}
```

#### Python

```python
number = int(input("Input  : "))

sum = 0

temp = number
while temp > 0:
    digit = temp % 10
    sum += digit ** 3
    temp //= 10

output = "armstrong number" if number == sum else "not a armstrong number"
print("Output :", output)
```
