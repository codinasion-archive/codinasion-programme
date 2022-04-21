## Write a program to print sum of square of n natural number

```
Input  : 3
Output : 14
```

---

<CodeBlock slots="heading, code" repeat="4" languages="Python, Java, C++, C" />

#### Python

```python
# Input
n = int(input('Input : '))

# Finding sum of square
total = [x**2 for x in range(1,n+1)]

# Output
print('Output: ',sum(total))
```

#### Java

```java
import java.io.*;
import java.util.*;

class SumOfSquare {

    public static int squaresum(int n)
    {
        return (n * (n + 1) / 2) * (2 * n + 1) / 3;
    }

    public static void main(String[] args)
    {
        // Input character
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        int n = sc.nextInt();

        // output ASCII value
        System.out.println(squaresum(n));
    }
}
```

#### C++

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a, total = 0;
    cout << "Input : ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        total += (i * i);
    }
    cout << "Output : " << total << endl;
    return 0;
}
```

#### C

```c
#include <stdio.h>

int main()
{
    int n;
    int result = 0;

    printf("n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result += i * i;
    }

    printf("%d", result);
    return 0;
}
```
