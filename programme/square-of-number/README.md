## Write a programme to find the square of a number

```
Input:  5
Output: 25
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, Java" />

#### Python

```python
# input
n=int(input('Input: '))

# output
print('Output: ',n**2)
```

#### Java

```java
import java.util.*;

public class Square {
    public static void main(String[] args) {
        // scanner class to take input
        Scanner sc = new Scanner(System.in);

        // input number
        System.out.print("Input  : ");
        int n = sc.nextInt();

        // squaring n
        int squareOfn = n * n;

        // printing output
        System.out.println("Output : " + squareOfn);
    }
}
```
