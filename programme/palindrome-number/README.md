## Write a program to check palindrome number.

```
Input  : 121
Output : Palindrome number
```

---

<CodeBlock slots="heading, code" repeat="4" languages="Python, Java, C++, C" />

#### Python

```python
def checkPalindrome(a):
    pal = n = 0
    original = a
    while a > 0:
        n = a % 10
        pal = pal*10 + n
        a = a//10

    if original == pal:
        return "Palindrome number"
    return "Not palindrome number"


num = int(input("Input  : "))
print("Output :", checkPalindrome(num))
```

#### Java

```java
import java.util.*;

public class solution {
    public static String checkPalindrome(int a) {
        int pal = 0, n;
        int original = a;
        while (a > 0) {
            n = a % 10;
            pal = pal * 10 + n;
            a = a / 10;
        }
        if (original == pal) {
            return "Palindrome number";
        }
        return "Not palindrome number";
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input  : ");
        int num = sc.nextInt();
        System.out.println("Output : " + checkPalindrome(num));
        sc.close();
    }
}
```

#### C++

```cpp
#include <iostream>
#include <cstring>
using namespace std;
string checkPalindrome(int a)
{
    int pal = 0, n;
    int original = a;
    while (a > 0)
    {
        n = a % 10;
        pal = pal * 10 + n;
        a = a / 10;
    }
    if (original == pal)
    {
        return "Palindrome number";
    }
    return "Not palindrome number";
}

int main()
{
    int num;
    cout << "Input  : ";
    cin >> num;
    cout << "Output : " << checkPalindrome(num) << endl;
    return 0;
}
```

#### C

```c
#include <stdio.h>
char *checkPalindrome(int a)
{
    int pal = 0, n;
    int original = a;
    while (a > 0)
    {
        n = a % 10;
        pal = pal * 10 + n;
        a = a / 10;
    }
    if (original == pal)
    {
        return "Palindrome number";
    }
    return "Not palindrome number";
}
int main()
{
    int num, b = 0;
    printf("Input  : ");
    scanf("%d", &num);
    printf("Output : %s\n", checkPalindrome(num));
    return 0;
}
```
