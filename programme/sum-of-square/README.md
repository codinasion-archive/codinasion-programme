## Write a program to print sum of square of n natural number

```
Input: 3
Output: 14
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, Java" />

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
