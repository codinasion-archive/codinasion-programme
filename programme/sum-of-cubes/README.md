## Write a programme to find sum of cubes of first n natural numbers.

```
Input: 4
Output: 100
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, Java" />

#### Python

```python
#Input
n = int(input('Input : '))

#Reversing the number using string slicing
sumofcubes = sum([x*x*x for x in [*range(1, n+1)]])

#Output
print('Output: ', sumofcubes)
```

#### Java

```java
import java.util.*;
public class solution
{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        int n = sc.nextInt();
        int total = 0;
        for(int i=1;i<=n;i++){
            total += (i*i*i);
        }
        System.out.println("Output: "+total);
        sc.close();
    }
}
```
