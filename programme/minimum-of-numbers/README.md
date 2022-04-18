## Write a program to print the minimum of given numbers

```
Input  : 2 4 1 16 6
Output : 1
```

---

<CodeBlock slots="heading, code" repeat="5" languages="Python, C#, Java, C, C++" />

#### Python

```python
# Taking input and making a list
n = list(map(int, input("Input: ").split()))

# Printing the minimum value
print(min(n))
```

#### C#

```cs
using System;
using System.Linq;

public class MinNumber
{
    static void Main(string[] args)
    {
        int Minimum(string input)
        {
            return input.Split(" ").Min(x => int.Parse(x));
        }

        // Input numbers
        Console.Write("Input numbers : ");
        string input = Console.ReadLine();

        // output minimum number
        Console.WriteLine("Minimum : " + Minimum(input));
    }
}
```

#### Java

```java
import java.util.*;
import java.util.stream.Collectors;

class MinNumber {
    public static void main(String[] args) {
        // Input numbers
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter numbers: ");
        String l = sc.nextLine();

        // Output minimum number
        List<Integer> ints = Arrays.stream(l.split(" "))
                .map(Integer::parseInt)
                .collect(Collectors.toList());
        System.out.println("Minimum: " +  Collections.min(ints));
    }
}
```

#### C

```c
#include <stdio.h>
#include <limits.h>

int main()
{
    // Initializes the min variable as the maximum integer possible
    int min = INT_MAX, n, test;
    printf("Enter amount of numbers : ");
    scanf("%i", &n);
    printf("\n");

    // Input one number at a time
    while (n > 0)
    {
        printf("Enter number : ");
        scanf("%i", &test);
        if (test < min)
            min = test;
        n--;
    };

    // Output
    printf("\nThe minimum is : %i\n", min);
    return 0;
}
```

#### C++

```cpp
#include <iostream>
#include <limits>

int main()
{
  int min = std::numeric_limits<int>::max(); // Initializes as maximum value of int.
  unsigned int count = 0;
  std::cout << "Enter amount of numbers : ";
  std::cin >> count;

  while (count > 0)
  {
    int n = 0;
    std::cout << "Enter number : ";
    std::cin >> n;

    if (n < min)
    {
      min = n;
    }

    --count;
  }

  std::cout << "\nMinimum : " << min << "\n";

  return 0;
}
```
