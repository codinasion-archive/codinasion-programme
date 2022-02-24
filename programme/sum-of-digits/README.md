## Write a program to print sum of digits.

```
Input:  2332
Output: 10
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, C++" />

#### Python

```python
# Input number
n = int(input("Enter the number: "))

# find sum
sum_digits = 0
while n > 0:
    rem = n % 10
    sum_digits += rem
    n = n // 10

print(sum_digits)
```
#### C
```c
#include <stdio.h>
int main() {
    int num, d, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        d = num % 10;
        sum = sum + d;
        num = num / 10;
    }
    printf("The sum of the digits of the number: %d", sum);
    return 0;
}
```

#### C++

```cpp
#include <iostream>
using namespace std;

int main()
{
    int num, d, sum = 0;
    cout << "Enter a number : ";
    cin >> num;

    while (num != 0)
    {
        d = num % 10;
        sum = sum + d;
        num = num / 10;
    }

    cout << "The sum of the digits of the number: " << sum << endl;
}
```

#### Java
```java
import java.util.Scanner;

class SumOfDigits {
    public static void main(String[] args) {
        
        int num, d, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");  
        num=sc.nextInt();
        
        while (num != 0)
        {
            d = num % 10;
            sum = sum + d;
            num = num / 10;
        }
    
        System.out.println("The sum of the digits of the number: "+sum);
            
    }
}
```
