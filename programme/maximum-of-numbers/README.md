## Write a program to print the maximum of given numbers

```
Input: 2 4 1 16 6
Output: 16
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, C#" />

#### Python

```python
# Taking input and making a list
n = list(map(int, input("Input: ").split()))

# Printing the maximum value
print(max(n))
```

#### C#

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
#### Java

```Java

import java.io.IOException;
import java.util.Scanner;
import java.util.*;
public class MaximumOfNumbers {
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
         String input = sc.nextLine();
         String[] inputArr = input.split(" ");
         Integer[] numbers = new Integer[inputArr.length];
         for(int i = 0; i < numbers.length; i++)
         {
             numbers[i] = Integer.parseInt(inputArr[i]);
         }
         List<Integer> list = Arrays.asList(numbers);
         list.stream().reduce((x, y) -> x > y ? x : y).ifPresent(System.out::println);
         
    }
    
}

```