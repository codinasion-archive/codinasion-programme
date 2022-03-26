## Write a programme to find area of triangle

```
a : 10
b : 17
c : 21

s : 24

area : 84
```

---

<CodeBlock slots="heading, code" repeat="3" languages="Python, C++, Java" />

#### Python

```python
a = float(input('Enter the length of first side  : '))
b = float(input('Enter the length of second side : '))
c = float(input('Enter the length of third side  : '))

s = (a + b + c) / 2

# calculate and output area
area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
print('\nThe area of the triangle is %0.2f' % area)
```

#### C++

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    cout << "Enter c : ";
    cin >> c;

    float s = (float)(a + b + c) / 2;

    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "\ns : " << s << endl;
    cout << "\nArea : " << area << endl;

    return 0;
}
```

#### Java

```java
package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a : ");
        int a = sc.nextInt();

        System.out.print("Enter b : ");
        int b = sc.nextInt();

        System.out.print("Enter c : ");
        int c = sc.nextInt();

        area(a, b, c);

        sc.close();

    }

    public static int area(int a, int b, int c) {

        int s = (a + b + c) / 2;

        int area = (int) Math.sqrt(s * (s - a) * (s - b) * (s - c));
        System.out.println("\nArea of triangle : " + area);
        return area;

    }
}
```
