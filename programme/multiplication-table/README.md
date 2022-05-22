---
title: Multiplication Table
description: Write a program to output the multiplication table
tags:
  - c
  - c++
  - python
  - java
contributors:
  - Tosin-dotcom
  - PrajwalBorkar
---

## Write a program to output the following multiplication table

```txt
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
...
5 x 10 = 50
```

---

<CodeBlock>

```c
#include <stdio.h>

void main()
{
    int n = 5;
    for(int i=1; i<=10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }
}
```
                       
```cpp

#include <iostream>

using namespace std;

int main() {
   int n = 5, i;
   for (i = 1; i <= 10; i++)
   cout << n << " * " << i << " = " << n * i << endl;
   return 0;
}           
```                       

```python
def table_of(n):
    for i in range(1, 11):
        print(f"{n} x {i} = {n*i}")


n = int(input("Enter number: "))

table_of(n)
```

                       
```java
public class MultiplicationTable {

    public static void main(String[] args) {

        int num = 5;
        for(int i = 1; i <= 10; ++i)
        {
            System.out.printf("%d * %d = %d \n", num, i, num * i);
        }
    }
}
```  
</CodeBlock>
