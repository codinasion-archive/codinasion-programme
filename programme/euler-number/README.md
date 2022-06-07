---
title: Euler's Number
description: Write a programme to compute the value of Euler's Number
image: hero.png
tags:
  - python
  - java
  - js
  - c
  - cpp
contributors:
  - LevBernstein
  - Anzo52
  - mathcodes
  - ssavi-ict
---

## Write a programme to compute the value of Euler's Number

```txt
1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
```

---

<CodeBlock>

```python
from math import factorial

def e(n):
    return sum((1 / factorial(i) for i in range(1, n + 1)))
```

```java
import java.util.Scanner;

public class EulersNumber {

    public static double eulersNumber(int n) {

        double e = 1;
        double factorial = 1;

        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
            e = e + 1 / factorial;
        }

        return e;
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        System.out.print("Input  : ");
        int n = input.nextInt();
        System.out.println("Output : " + eulersNumber(n));
        input.close();
    }
}
```
               
```js
const factorial = (n) => {
  let r = 1;
  for (let i = 2; i <= n; i++) r *= i;
  return r;
};

const sum = (n) => {
  let s = 0;
  for (let i = 1; i <= n; i++) s += 1.0 / factorial(i);
  return s;
};

console.log("n : 3");
console.log("\nsum : ", sum(3).toFixed(2));
```

```c
#include <stdio.h>

int main()
{
    int N;
    printf("Enter N : ");
    scanf("%d", &N);
    float eNumber = 1, fact = 1;
    for (int i = 1; i <= N; i++)
    {
        fact = fact * i;
        eNumber += (1.0 / fact);
    }
    printf("Euler Number of %d : %f\n", N, eNumber);
}
```

```cpp
#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Enter N : ";
    cin >> N;
    float eNumber = 1, fact = 1;
    for (int i = 1; i <= N; i++)
    {
        fact = fact * i;
        eNumber += (1.0 / fact);
    }
    cout << "Euler Number of " << N << " : " << eNumber << endl;
}
```

</CodeBlock>
