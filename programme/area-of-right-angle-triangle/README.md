## Write a programme to find area of right angle triangle.

```
base  : 2
height : 3

area : 3
```

---

<CodeBlock slots="heading, code" repeat="4" languages="Java" />

#### Java

```java
import java.util.*;

class area{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //input base
        System.out.print("base : ");
        double base = sc.nextDouble();
        //input height
        System.out.print("height : ");
        double height = sc.nextDouble();
        //calculate height
        double area = 0.5 * base * height;
        //print output
        System.out.print("area : " + area);
    }
}
```
