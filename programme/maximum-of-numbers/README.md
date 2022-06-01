---
title: Maximum of Numbers
description: Write a program to print the maximum of given numbers
tags:
  - python
  - cs
  - java
  - c
  - cpp
contributors:
  - harshi1122
  - Mrczarny
  - HaveACookie
  - ssavi-ict
---

## Write a program to print the maximum of given numbers

```txt
Input  : 2 4 1 16 6
Output : 16
```

---

<CodeBlock>

```python
# Taking input and making a list
n = list(map(int, input("Input: ").split()))

# Printing the maximum value
print(max(n))
```

```cs
using System;
using System.Linq;

public class MaxNumber
{
    static void Main(string[] args)
    {
        int Maximum(string input)
        {
            return input.Split(" ").Max(x => int.Parse(x));
        }

        // Input numbers
        Console.Write("Enter numbers : ");
        string input = Console.ReadLine();

        // output maximum number
        Console.WriteLine("Maximum : " + Maximum(input));
    }
}
```

```java
import java.util.Scanner;
import java.util.*;

public class MaximumOfNumbers {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter numbers : ");
        String input = sc.nextLine();

        String[] inputArr = input.split(" ");
        Integer[] numbers = new Integer[inputArr.length];
        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = Integer.parseInt(inputArr[i]);
        }
        List<Integer> list = Arrays.asList(numbers);

        System.out.print("\nMaximum Number : ");
        list.stream().reduce((x, y) -> x > y ? x : y).ifPresent(System.out::println);
        sc.close();
    }

}
```

```c
#include <stdio.h>
#include <limits.h>

int main()
{
    // Initializes the max variable as the minimum integer possible
    int max = INT_MIN, n, test;
    printf("Enter amount of numbers : ");
    scanf("%i", &n);
    printf("\n");

    // Input one number at a time
    while (n > 0)
    {
        printf("Enter number : ");
        scanf("%i", &test);
        if (test > max)
            max = test;
        n--;
    };
  
    // Output
    printf("\nThe maximum is : %i\n", max);
    return 0;
}
```

```cpp
#include <iostream>
#include <limits>

int main()
{
    // Initializes as minimum value of int
    int max = std::numeric_limits<int>::min();
    unsigned int count = 0;
    std::cout << "Enter amount of numbers : ";
    std::cin >> count;

    while (count > 0)
    {
        int n = 0;
        std::cout << "Enter number : ";
        std::cin >> n;

        if (n > max)
        {
            max = n;
        }

        --count;
    }

    std::cout << "\nMaximum : " << max << "\n";

    return 0;
}

```

</CodeBlock>
