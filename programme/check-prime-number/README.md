## Write a program to check prime number

```
Input  : 7
Output : Prime number
```

---

<CodeBlock slots="heading, code" repeat="3" languages="Python, Java, C" />

#### Python

```python
# check prime number function
def check_prime(num):
    if (num == 0 or num == 1):
        return "Not prime number"
    for i in range(2, num//2+1):
        if num % i == 0:
            return "Not prime number"
    return "Prime number"

# programme driver
n = int(input("Input : "))
print("Output :", check_prime(n))
```

#### Java

```java
import java.util.*;

public class solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("\nInput: ");
        int n = sc.nextInt();

        if (n == 0 || n == 1) {
            System.out.println("Output: Not prime number");
        } else {
            int temp = 0;
            for (int i = 2; i < n / 2; i++) {
                if (n % i == 0) {
                    temp = 1;
                    break;
                }
            }

            if (temp == 1) {
                System.out.println("Output: Not prime number");
            } else {
                System.out.println("Output: Prime number");
            }
        }
        sc.close();
    }
}
```

#### C

```c
#include <stdio.h>
int main()
{
    int a, b = 0;
    printf("Input  : ");
    scanf("%d", &a);
    printf("Output : ");
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            b = 1;
            break;
        }
    }
    if (b == 1)
    {
        printf("Not prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }
    return 0;
}
```
