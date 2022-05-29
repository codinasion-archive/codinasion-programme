---
title: Sum of square
description: Write a program to find the sum of square of first 'n' numbers
tags:
  - python
  - java
  - cpp
  - c
contributors:
  - NeelPatel31
  - KikiManjaro
  - Badboy-16
---

## Write a program to print sum of square of n natural number

```txt
Input  : 3
Output : 14
```

---

<CodeBlock>

```python
# Input
n = int(input('Input : '))

# Finding sum of square
total = [x**2 for x in range(1,n+1)]

# Output
print('Output: ',sum(total))
```

```java
import java.io.*;
import java.util.*;

class SumOfSquare {

    public static int squaresum(int n)
    {
        return (n * (n + 1) / 2) * (2 * n + 1) / 3;
    }

    public static void main(String[] args)
    {
        // Input character
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        int n = sc.nextInt();

        // output ASCII value
        System.out.println(squaresum(n));
    }
}
```

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a, total = 0;
    cout << "Input : ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        total += (i * i);
    }
    cout << "Output : " << total << endl;
    return 0;
}
```

```c
#include <stdio.h>

int main()
{
    int n;
    int result = 0;

    printf("n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result += i * i;
    }

    printf("\nsum : %d\n", result);
    return 0;
}
```

```javascript
var readline = require("readline");

var rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Input  : ", function (N) {
  // Read N
  N = parseInt(N);
  N = (N * (N + 1) * (2 * N + 1)) / 6;
  console.log("Output :", N);
  rl.close();
});

// Check it here : https://onecompiler.com/javascript/3y5c8z56m
```

</CodeBlock>
