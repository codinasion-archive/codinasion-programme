---
title: Divide two numbers
description: Write a programme to divide two numbers
tags:
  - c
  - java
  - python
  - js
  - cpp
contributors:
  - giftcup
  - udit6023
  - Divyanshpatel18
  - seraph776
  - arch0nline
  - akhil484
---

## Write a program to divide two numbers

```txt
Input the Dividend : 4
Input the Divisor  : 2

Output : 2.0
```

---

<CodeBlock>

```c
#include <stdio.h>
#include <stdlib.h> // for the exit function
#include <assert.h> // for the assert function

// call to divide function with two parameters
double divide(int num1, int num2);
void test(void);

int main(void)
{
    int num1, num2;
    double output;

    test();

    printf("Input the Dividend: ");
    scanf("%d", &num1);
    printf("Input the Divisor: ");
    scanf("%d", &num2);
    output = divide(num1, num2);
    printf("\nOutput : %.1lf\n", output);

    return 0;
}

// fuction which takes two parameters first one is Dividend and second one is Divisor
double divide(int num1, int num2)
{
    // if divisor is 0, exit the program
    if (num2 == 0)
    {
        printf("Division by 0 is not allowed!\n");
        exit(EXIT_FAILURE);
    }
    return (double)num1 / (double)num2;
}

// checks correctness of the divide function
void test(void)
{
    assert(divide(4, 2) == 2.0);
    assert(divide(2, 4) == 0.5);
}
```

```java
import java.util.Scanner;

public class Divide_two_numbers {

    public static double Divide(int num1, int num2) {
        // if divisor is 0
        if (num2 == 0) {
            System.out.println("Division by 0 is not allowed");
            return -1;
        }
        return (double) num1 / (double) num2;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input the Dividend : ");
        int num1 = sc.nextInt();
        System.out.print("Input the Divisor  : ");
        int num2 = sc.nextInt();

        // divide two numbers
        double result = Divide(num1, num2);

        System.out.printf("\nOutput : %.1f\n", result);

    }
}
```

```python
import sys


def divide_two_numbers(n1: int, n2: int) -> None:
    """Divides two numbers"""
    try:
        print(f'\nOutput : {n1 / n2}')
    except ZeroDivisionError:
        print('\nCannot divide by zero!', file=sys.stderr)
        pass


if __name__ == '__main__':
    ht = {1: 'dividend', 2: 'divisor '}

    n1, n2 = [int(input(f'Input the {ht.get(i)} : ')) for i in range(1, 3)]
    divide_two_numbers(n1, n2)
```

```javascript
function divide(a, b) {
  return (a / b).toFixed(2);
}

let num1 = prompt("Enter First Number : ");
let num2 = prompt("Enter Second Number : ");

console.log("Output :", divide(num1, num2));
```

```cpp
#include <iostream>
using namespace std;

double Divide(int num1, int num2)
{
    if (num2 == 0)
    {
        return -1;
    }
    double result = (double)num1 / (double)num2;
    return result;
}

int main()
{
    int num1, num2;
    cout << "Input the Dividend : ";
    cin >> num1;
    cout << "Input the Divisor  : ";
    cin >> num2;
    double result = Divide(num1, num2);
    if (result == -1)
    {
        cout << "\n!!!  Divide by Zero is not possible  !!!\n";
    }
    else
    {
        cout << "\nOutput : " << result << endl;
    }

    return 0;
}
```

</CodeBlock>
