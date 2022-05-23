---
title: Euler's Number
description: Write a programme to compute the value of Euler's Number
tags:
  - python
  - java
  - javascript
contributors:
  - LevBernstein
  - Anzo52
  - mathcodes
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
//Javascript program to compute
// sum of series 1/1! + 1/2! + .. + 1/n!
 
// function calculating the factorials for the sum of series calculated in the following function
const factorial = (n) => {
    let r = 1;
    for (let i = 2;  i <= n; i++)
        r *= i;
    return r;
}
 
// `sum` is a lot like function for the "harmonic series" solution, but here on line 17 we call the function 'factorial' in the denominator as needed.
const sum = (n) => {
    let s = 0;
    for (let i = 1; i <= n; i++)
        s += 1.0 / factorial(i);
    return s;
}
```

</CodeBlock>
