## Write a programme to find area of right angle triangle.

```
base  : 2
height : 3

area : 3
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Java, Python" />

#### Java

```java
import java.util.*;

class area {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // input base
        System.out.print("base : ");
        double base = sc.nextDouble();
        
        // input height
        System.out.print("height : ");
        double height = sc.nextDouble();
        
        // calculate area
        double area = 0.5 * base * height;
        
        // print output
        System.out.println("\narea : " + area);
    }
}
```

#### Python

```python
# input base
base = input('Enter the base of the triangle : ')

# input height
height = input('Enter the height of the triangle : ')

# output area
print('\nThe area of the right angle triangle is : ', int(base) * int(height) / 2)
```
