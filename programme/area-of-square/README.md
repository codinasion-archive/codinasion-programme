## Write a program to find the area of a square.

```
side : 4

area : 16
```

---

<CodeBlock slots="heading, code" repeat="5" languages="Java, C, Python, C#, C++" />

#### Java

```java
import java.util.*;

class Solution {
    public static void main(String[] arg) {
        int side = input();
        int area = computeArea(side);
        finish(area);
    }

    private static int input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("side : ");
        int side = sc.nextInt();
        sc.close();
        return side;
    }

    private static int computeArea(int side) {
        return side * side;
    }

    private static void finish(int area) {
        System.out.println("area : " + area);
    }
}
```

#### C

```c
#include <stdio.h>
#include <assert.h> // for the assert function

double area_of_square(double side);
void test(void);

int main(void)
{
    double area, side;

    test();

    printf("side : ");
    scanf("%lf", &side);
    
    area = area_of_square(side);
    printf("\narea : %.1lf\n", area);

    return 0;
}

// calculates the area
double area_of_square(double side)
{
    return side * side;
}

// checks correctness of the area calculation
void test(void)
{
    assert(area_of_square(4) == 16);
}
```

#### Python

```python
# input side
x = int(input('side : '))

# output srea
print('area :', x**2)
```

#### C#

```cs
using System;

public class SquareArea
{
    static void Main(string[] args)
    {
        double SquareArea(string input)
        {
            return Math.Pow(double.Parse(input), 2);
        }

        // Input numbers
        Console.Write("Enter side : ");
        string input = Console.ReadLine();

        // output sum of numbers
        Console.WriteLine("\nArea of square : " + SquareArea(input));
    }
}
```

#### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
  double side;

  // input
  cout << "Enter side length : ";
  cin >> side;

  double area = side * side;

  // output area
  cout << "Area of Square : " << area << endl;

  return 0;
}
```
