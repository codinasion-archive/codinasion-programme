## Write a programme to find area of square

```
side : 4
area : 16
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Java" />

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
