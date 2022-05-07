---
title: Sum of Cubes
description: Write a programme to find sum of cubes of first n natural numbers
tags:
  - python
  - java
  - c
  - cpp
contributors:
  - johnelbacani
  - NeelPatel31
---

## Write a programme to find sum of cubes of first n natural numbers.

```
Input  : 4
Output : 100
```

---

<CodeBlock>

```python
#Input
n = int(input('Input : '))

#Reversing the number using string slicing
sumofcubes = sum([x*x*x for x in [*range(1, n+1)]])

#Output
print('Output: ', sumofcubes)
```

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

```c
#include <stdio.h>

int main()
{
    int a;
    int total = 0;
    printf("Input : ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        total += (i * i * i);
    }
    printf("Output : %d\n", total);
    return 0;
}
```

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a, total = 0;
    cout << "Input : ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        total += (i * i * i);
    }
    cout << "Output : " << total << endl;
    return 0;
}
```

</CodeBlock>
