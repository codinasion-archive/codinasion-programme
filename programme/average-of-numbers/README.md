---
title: Average of numbers
description: Write a program to find the average of numbers
image: hero.png
tags:
  - python
  - java
  - c
  - cpp
contributors:
  - harshi1122
  - Anzo52
  - ssavi-ict
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

</CodeBlock>
