## Write a program to get the factorial of a number.

```
Input:  5
Output: 120
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, Java" />

#### Python

```python
# recursive factorial function
def factorial(n):
    if n == 1 or n == 0:
        return 1
    else:
        return n*factorial(n-1)

n = int(input("Input:"))
print("Output: ", factorial(n))
```

#### Java

```java
import java.util.Scanner;

class Factorial {
    public static void main(String args[]) {
        // Input from User
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        double number = sc.nextInt();

        // output
        int i, fact = 1;
        for (i = 1; i <= number; i++) {
            fact = fact * i;
        }
        System.out.println("Output: " + fact);
    }
}
```
