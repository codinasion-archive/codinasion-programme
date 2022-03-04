## Write a program to print Fibonacci series without using recursion.

```
Input: 10
Output: 0 1 1 2 3 5 8 13 21 34
```

---

<CodeBlock slots="heading, code" repeat="4" languages="C, Java, Python, C++" />

#### C

```c
#include <stdio.h>
int main()
{
    int a = 0, b = 1, temp = 0, n;
    printf("Input  : ");
    scanf("%d", &n);
    int i = 0;
    printf("Output : ");
    while (i != n)
    {
        printf("%d ", a);
        temp = a;
        a = b;
        b = temp + b;
        i++;
    }
    printf("\n");
    return 0;
}
```

#### Java

```java
import java.util.Scanner;

public class solution {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        int n = sc.nextInt();
        int a = 0, b = 1, temp = 0;

        System.out.print("\n" + a + " " + b);

        for (int i = 2; i < n; i++) {
            temp = a + b;
            System.out.print(" " + temp);
            a = b;
            b = temp;
        }
        System.out.println();
        sc.close();
    }
}
```

#### Python

```python
a = 0
b = 1
i = 0
n = int(input("Input  : "))
print("Output : ", end="")
while (i != n):
    print(a, end=" ")
    temp = a
    a = b
    b = temp + b
    i += 1
print()
```

#### C++

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, i = 0, temp = 0, n = 0;
    cout << "Input  : ";
    cin >> n;
    cout << "Output : ";
    while (i != n)
    {
        cout << a << " ";
        temp = a;
        a = b;
        b = temp + b;
        i++;
    }
    cout << endl;
    return 0;
}
```
