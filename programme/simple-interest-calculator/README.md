---
title: Simple Interest Calculator
description: Write a programme to calculate simple interest
image: hero.png
tags:
  - java
  - python
  - c
  - cpp
  - cs
  - js
contributors:
  - Anzo52
  - Zuquim
  - ClasherKasten
  - rossilor95
---

## Write a programme to calculate simple interest

```txt
Enter P : 5000
Enter T : 10
Enter R : 5

Simple Interest : 2500
```

---

<CodeBlock>

```java
import java.util.Scanner;

public class SimpleInterestCalculator {

    public static int interestCalculator(int principle, int time, int rate) {
        int interest = (principle * time * rate) / 100;
        return interest;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter P : ");
        int principle = sc.nextInt();
        System.out.print("Enter T : ");
        int time = sc.nextInt();
        System.out.print("Enter R : ");
        int rate = sc.nextInt();
        int interest = interestCalculator(principle, time, rate);
        System.out.println("\nSimple interest: " + interest);
        sc.close();
    }
}
```

```python
p = int(input("Enter P : "))
t = int(input("Enter T : "))
r = int(input("Enter R : "))

print(f"\nSimple Interest : {p * t * r / 100}")
```

```c
#include <stdio.h>

int simple_interest(int p, int t, int r)
{
    return (int)(p * t * r / 100);
}

int main(void)
{
    int p, t, r;
    printf("Enter P : ");
    scanf("%d", &p);
    printf("Enter R : ");
    scanf("%d", &r);
    printf("Enter T : ");
    scanf("%d", &t);
    printf("\nSimple Interest : %d\n", simple_interest(p, t, r));
    return 0;
}
```

```cpp
#include <iostream>

int simple_interest(int p, int t, int r)
{
    return (int)(p * t * r / 100);
}

int main(void)
{
    int p, t, r;
    std::cout << "Enter P : ";
    std::cin >> p;
    std::cout << "Enter R : ";
    std::cin >> r;
    std::cout << "Enter T : ";
    std::cin >> t;
    printf("\nSimple Interest : %d\n", simple_interest(p, t, r));
    return 0;
}
```

```cs
using System;

namespace Calculations
{
    public class SimpleInterestCalculator
    {
        public static decimal
        CalculateInterest(
            decimal principalAmount,
            int time,
            int percentageInterestRate
        )
        {
            float decimalInterestRate = percentageInterestRate / 100f;
            return principalAmount * (decimal)(time * decimalInterestRate);
        }

        public static decimal GetDecimalInput(string instructions)
        {
            bool isInputValid;
            decimal inputValue;

            do
            {
                Console.Write (instructions);
                isInputValid =
                    decimal.TryParse(Console.ReadLine(), out inputValue);
            }
            while (!isInputValid);

            return inputValue;
        }

        public static int GetIntInput(string instructions)
        {
            bool isInputValid;
            int inputValue;

            do
            {
                Console.Write (instructions);
                isInputValid = int.TryParse(Console.ReadLine(), out inputValue);
            }
            while (!isInputValid);

            return inputValue;
        }

        public static void Main()
        {
            decimal principalAmount = GetDecimalInput("Enter P : ");
            int time = GetIntInput("Enter T : ");
            int percentageInterestRate = GetIntInput("Enter R : ");

            decimal interestAmount =
                CalculateInterest(principalAmount,
                time,
                percentageInterestRate);
            Console
                .WriteLine("\nSimple interest : " +
                Math.Round(interestAmount, 2));
        }
    }
}
```

```js
"use strict";

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question('Enter P : ', p => {
	rl.question('Enter T : ', t => {
		rl.question('Enter R : ', r => {
			const si = parseInt(p) * parseInt(t) * parseInt(r) / 100;
			if (isNaN(si)) {
				console.error('Some error occured');
			} else {
				console.log(`\nSimple Interest : ${si}`);
			}
			rl.close();
		});
	});
});
```

</CodeBlock>
