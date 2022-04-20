## Write a program to swap two numbers without using third variable.

```
Input:  a=10 b=20
Output: a=20 b=10
```

---

<CodeBlock slots="heading, code" repeat="4" languages="Python, C, C++, Java" />

#### Python

```python
# define variables
a = 10
b = 20

# swap numbers
a, b = b, a

# print result
print(a, b)
```

#### C

```c
#include <stdio.h>

int main()
{
  // initialize two numbers
  int number1, number2;
  printf("enter two numbers ");

  // taking input from user
  scanf("%d %d", &number1, &number2);

  // swapping the numbers
  number1 = number1 + number2;
  number2 = number1 - number2;
  number1 = number1 - number2;

  // after swapping output
  printf("after swap two numbers are %d and %d", number1, number2);

  return 0;
}
```

#### C++

```cpp
#include <iostream>

void swap(int &x, int &y)
{
  x = x + y;
  y = x - y;
  x = x - y;
}

int main()
{
  int a, b;
  std::cout << "a : ";
  std::cin >> a;
  std::cout << "b : ";
  std::cin >> b;

  swap(a, b);

  std::cout << "\na = " << a << "\nb = " << b << "\n";

  return 0;
}
```
#### Java
```java
import java.util.Scanner;

public class Swap {
    private static void swap(int a, int b) {
        System.out.println("Numbers before swap: " + a + " and " + b);
        a = a + b;
        b = a - b;
        a = a - b;
        System.out.println("Numbers after swap: " + a + " and " + b);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int a = sc.nextInt();
        System.out.print("Enter another number: ");
        int b = sc.nextInt();

        swap(a, b);
        sc.close();
    }
}
```