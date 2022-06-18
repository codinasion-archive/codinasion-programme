---
title: Average of numbers
description: Write a program to find the average of numbers
image: hero.png
tags:
  - python
  - java
  - c
  - cpp
  - go
  - cs
  - jl
contributors:
  - harshi1122
  - Anzo52
  - ssavi-ict
  - MadhuS-1605
  - hansleykowlessur
  - SanjayShetty01
---

## Write a program to find average of numbers

```txt
Input:  2 3 4
Output: 3
```

---

<CodeBlock>

```python
# importing statistics module
import statistics

# taking input and making a list
n = list(map(int, input("Input: ").split()))

# printing output
print('Output:', statistics.mean(n))
```

```java
import java.util.Scanner;

public class AverageOfNumbers {

    private Scanner in;

    public AverageOfNumbers() {
        String getStr = getUserNums();
        double result = userAvg(getStr);
        printAverage(result, getStr);

    }

    public String getUserNums() {
        in = new Scanner(System.in);
        System.out.print("Input  : ");
        return in.nextLine();
    }

    public static double userAvg(String str) {
        String[] arr = str.split(" ");
        double sum = 0.0;
        double average = 0.0;

        for (int i = 0; i < arr.length; i++) {
            sum += Integer.parseInt(arr[i]);
        }
        if (arr.length > 0) {
            average = sum / arr.length;
        }

        return average;
    }

    public static void printAverage(double average, String userNumInput) {
        System.out.println("Output : " + average);

    }

    public static void main(String[] args) {
        new AverageOfNumbers();

    }
}
```

```c
#include <stdio.h>

int main()
{
    int N, num;
    printf("Numbers count : ");
    scanf("%d", &N);
    printf("\nEnter %d Numbers\n", N);
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        printf("Enter : ");
        scanf("%d", &num);
        sum += num;
    }
    printf("\nAverage is : %.2f\n", (sum * 1.0) / N);
}
```

```cpp
#include <iostream>

using namespace std;

int main()
{
    int N, num;
    cout << "Numbers count : ";
    cin >> N;
    cout << "\nEnter " << N << " Numbers" << endl;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter : ";
        cin >> num;
        sum += num;
    }
    cout << "\nAverage is " << (sum * 1.0) / N << endl;
    ;
}
```

```go
package main

import "fmt"

func main() {
	var n int
	var sum float64
	fmt.Print("Enter the number of numbers : ")
	fmt.Scan(&n)
	for i := 0; i < n; i++ {
		var num float64
		fmt.Print("Enter the number : ")
		fmt.Scan(&num)
		sum += num
	}
	fmt.Println("\nThe average of the numbers is :", sum/float64(n))
}
```

```cs
using System;
using System.Linq;

namespace AverageOfANumber
{
    class AverageOfANumber
    {
        static void Main(string[] args)
        {
            try
            {
                // Initialisation
                string numStr = string.Empty;
                float avgNum = 0.0f;

                // Read value from keyboard
                Console.Write("Input  : ");
                numStr = Console.ReadLine();

                // Calculate average
                avgNum =
                    numStr
                        .Split(" ") // <= Split each value using whitespace. E.g. "1 2 3" => ["1", "2", "3"]
                        .ToList() // Convert to List so as to use Linq
                        .ConvertAll(// Convert each string to a float. E.g. "1.5" => 1.5f
                        x => float.Parse(x.ToString()))
                        .Average(); // Compute average from the List returned by ConvertAll

                // Display result
                Console.WriteLine($"Output : {avgNum}");
            }
            // Handle other exceptions
            catch (Exception ex)
            {
                Console.WriteLine($"Errors => {ex.Message}{Environment.NewLine}{ex.StackTrace}");
            }
        }
    }
}
```
```julia

using Statistics 
using Printf

print("Input : ")

num = split(readline())

nums = parse.(Int32, num)

@printf("Output : %0.2f", mean(nums))

```

</CodeBlock>
