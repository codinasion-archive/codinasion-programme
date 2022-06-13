---
title: Compound Interest Calculator
description: Write a programme to calculate compound interest
image: hero.png
tags:
  - python
  - java
  - js
  - c
  - cpp
  - cs
  - go
contributors:
  - theanorak
  - KikiManjaro
  - michal-markiewicz
  - ssavi-ict
  - rossilor95
  - MadhuS-1605
---

## Write a programme to calculate compound interest

```txt
Enter P : 100
Enter T : 10
Enter R : 10

Amount : 259.37
Compound Interest : 159.37
```

---

<CodeBlock>

```python
# Input from User
p = int(input("Enter Principle Amount : "))
t = int(input("Enter Time Period : "))
r = int(input("Enter Rate of Interest : "))

# output
print('Amount : ', (round((p*((1+(r/100))**t)), 2)))
print('Compound Interest : ', (round((p*((1+(r/100))**t)) - p, 2)))
```

```java
import java.util.Scanner;

public class solution {
    public static void main(String args[]) {
        try (
                Scanner sc = new Scanner(System.in)) {
            // Input from User
            System.out.print("Enter Principle Amount : ");
            double p = sc.nextInt();
            System.out.print("Enter Time Period : ");
            double t = sc.nextInt();
            System.out.print("Enter Rate of Interest : ");
            double r = sc.nextInt();

            // output
            double amount = (double) (p * Math.pow(1 + (r / 100), t));
            System.out.println();
            System.out.println("Amount : " + Math.round(amount * 100.0) / 100.0);
            System.out.println("Compound Interest : " + Math.round((amount - p) * 100.0) / 100.0);
        }
    }
}
```

```javascript
function calculateCompoundInterest(amount, time, rate) {
  const finalAmount = amount * (1 + rate / 100) ** time;
  console.log("Amount :", finalAmount.toFixed(2));

  const compoundInterest = finalAmount - amount;
  return compoundInterest.toFixed(2);
}

let amount = 100;
let time = 10;
let rate = 10;

console.log(
  "Compound Interest :",
  calculateCompoundInterest(amount, time, rate)
);
```

```c
#include <stdio.h>
#include <math.h>

int main()
{
    int P, T, R;
    printf("Enter P : ");
    scanf("%d", &P);
    printf("Enter T : ");
    scanf("%d", &T);
    printf("Enter R : ");
    scanf("%d", &R);

    float A = pow((1.0 + (R * 1.0) / 100), (T * 1.0)) * P;
    printf("\nAmount : %.2f\n", A);
    float C = A - P;
    printf("Compound Interest : %.2f\n", C);

    return 0;
}
```

```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int P, T, R;
    cout << "Enter P : ";
    cin >> P;
    cout << "Enter T : ";
    cin >> T;
    cout << "Enter R : ";
    cin >> R;

    float A = pow((1.0 + (R * 1.0) / 100), (T * 1.0)) * P;
    cout << "\nAmount : " << A << endl;
    float C = A - P;
    cout << "Compound Interest : " << C << endl;
}
```

```cs
using System;

namespace Calculations
{
    public class CompoundInterest
    {
        public static decimal
        ComputeFinalAmount(
            decimal principalAmount,
            float interestRate,
            float time
        )
        {
            return principalAmount *
            (decimal) Math.Pow((1 + (interestRate / 100)), time);
        }

        public static decimal
        ComputeCompoundInterest(
            decimal principalAmount,
            float interestRate,
            float time
        )
        {
            return ComputeFinalAmount(principalAmount, interestRate, time) -
            principalAmount;
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

        public static float GetFloatInput(string instructions)
        {
            bool isInputValid;
            float inputValue;

            do
            {
                Console.Write (instructions);
                isInputValid =
                    float.TryParse(Console.ReadLine(), out inputValue);
            }
            while (!isInputValid);

            return inputValue;
        }

        public static void Main()
        {
            decimal principalAmount =
                GetDecimalInput("Enter the Principal Amount (A) : ");
            float interestRate =
                GetFloatInput("Enter the Time Period (T)      : ");
            float time = GetFloatInput("Enter the Rate of Interest (R) : ");

            decimal finalAmount =
                ComputeFinalAmount(principalAmount, interestRate, time);
            decimal compoundInterest =
                ComputeCompoundInterest(principalAmount, interestRate, time);

            Console.WriteLine();
            Console.WriteLine("Amount : " + Math.Round(finalAmount, 2));
            Console
                .WriteLine("Compound Interest : " +
                Math.Round(compoundInterest, 2));
        }
    }
}
```

```go
package main

import (
	"fmt"
	"math"
)

func main() {
	var priciple, term, rate float64
	var amount float64
	fmt.Print("Enter the Principle Amount : ")
	fmt.Scan(&priciple)
	fmt.Print("Enter the Term in Years : ")
	fmt.Scan(&term)
	fmt.Print("Enter the Intrest Rate : ")
	fmt.Scan(&rate)

	amount = math.Pow(1+rate/100, term) * priciple
	fmt.Println("\nThe Amount is :", math.Floor(amount*100)/100)

	intrest := amount - priciple
	fmt.Println("The Compound Intrest is :", math.Floor(intrest*100)/100)
}
```

</CodeBlock>
