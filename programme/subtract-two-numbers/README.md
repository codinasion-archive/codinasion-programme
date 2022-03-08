## Write a program to subtract two numbers

```
Input  : 5 3
Output : 2
```
```
Input  : 3 5
Output : -2
```

---

<CodeBlock slots="heading, code" repeat="4" languages="Java, Python, C, C++" />
#### Java

```Java
import java.util.*;
public class solution{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Input: ");
        // Input 2 numbers
        int a = sc.nextInt();
        int b = sc.nextInt();
        // Print difference
        System.out.println("Output: "+(a-b));
        sc.close();
    }
}
```

#### Python

```python
# input two numbers
x, y = input("Enter two numbers: ").split()

# print difference
print("Difference of numbers : ", int(x)-int(y))
```

#### C

```c
#include<stdio.h>

int main() {
    // declare variables
    int x, y;

    // get input
    printf("Enter two numbers ");
    scanf("%d %d", &x, &y);

    // print difference
    printf("Difference of numbers : %d\n", (x-y));

    return 0;
}
```

#### C++

```cpp
#include<iostream>

int main() {
    // declare variables
    int x, y;

    //get input
    std::cout << "Enter two numbers ";
    std::cin >> x;
    std::cin >> y;

    //print difference
    std::cout << "Difference of numbers : " << (x-y) << std::endl;
    
    return 0;
}
```
