## Write a program to find the length of string

```
Input  : abcd
Output : 4
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Java" />

#### Java

```Java
import java.util.Scanner;

public class StringLength {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    String input = scanner.next();
    System.out.println(input.length());
    scanner.close();
  }
}
```