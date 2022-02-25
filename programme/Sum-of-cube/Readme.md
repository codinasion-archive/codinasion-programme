## Write a programme to find sum of cube of 'n' number.

```
Input: 4
Output: 100
```

---

```java
import java.util.*;
public class SumOfCube{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        //Input
        System.out.print("Input: ");
        int n = sc.nextInt();
        int total = 0;
        //finding cube and adding to the total
        for(int i=1;i<=n;i++){
            total += (i*i*i);
        }
        //Output
        System.out.println("Output: "+total);
        sc.close();
    }
}
```