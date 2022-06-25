---
title: Rupee to Paise
description: Write a program to convert Rupee to Paise
image: hero.png
tags:
  - python
  - c
  - cpp
  - java
  - cs
  - go
  - js
contributors:
  - harshi1122
  - luiscff
  - nurhaliza
  - umaxyon
  - ClasherKasten
---

## Write a program to convert rupee to paise

```txt
Input:  15.95
Output: 1595
```

---

<CodeBlock>

```python
# input in rupee ( can be both decimal or integer value)
x=float(input('Input: '))

# output in paise
print('Output: ',int(x*100))
```

```c
#include <stdio.h>

int main()
{
    float x;

    // input in rupees
    printf("Amount in Rupees : ");
    scanf("%g", &x);

    // output in paise
    printf("Amount in Paise : %g\n", x * 100);
    return 0;
}
```

```cpp
#include <iostream>
using namespace std;
int main()
{
    double paise, rupees;
    cout << "Please enter desired rupee amount for paise conversion : ";
    cin >> rupees;
    paise = rupees * 100; // paise calculation

    cout << "\nTotal Rupees : " << rupees << " rupees" << endl;
    cout << "Total Paise  : " << paise << " paise" << endl;
    return 0;
}
```

```java
import java.util.Scanner;

public class rs_to_p {
    public static void main(String args[]) {
        double paise;
        Scanner in = new Scanner(System.in); // will create a new Scanner instance which points to the input stream
                                             // passed as argument
        System.out.print("Please enter desired rupee amount for paise conversion : ");
        double rupees = in.nextDouble(); // scans the next token of the input as a Double
        paise = rupees * 100; // paise calculation
        System.out.println("\nTotal Rupees : " + rupees + " rupees \nTotal Paise  : " + (long) paise + " paise");
        in.close();
    }
}
```

```cs
using System;

public class RupeeToPaise
{
    public static void Main(string[] args)
    {
        Console.Write("Rupee : ");
        double rupee;
        if (double.TryParse(Console.ReadLine(), out rupee))
        {
            Console.WriteLine("Paise : {0}", rupee * 100);
        }
        else
        {
            Console.WriteLine("Input Err");
        }
    }
}
```

```go
package main

import (
	"fmt"
	"strconv"
)

func main() {
	var str string

	fmt.Print("Rupee : ")
	fmt.Scan(&str)

	num, err := strconv.ParseFloat(str, 64)
	if err != nil {
		fmt.Printf("Input error: %s", str)
		return
	}

	fmt.Printf("Paise : %s\n", strconv.FormatFloat(num*100, 'f', -1, 64))
}
```

```js
"use strict";

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question('Input:  ', rs => {
	const p = parseFloat(rs) * 100;
	if (isNaN(p)) {
		console.error('Some error occured');
	} else {
		console.log(`Output: ${p}`);
	}
	rl.close();
});
```

</CodeBlock>
