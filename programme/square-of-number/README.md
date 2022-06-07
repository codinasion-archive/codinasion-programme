---
title: Square of a number
description: Write a program to find the square of a number
image: hero.png
tags:
  - python
  - java
  - c
  - cpp
  - js
contributors:
  - harshi1122
  - SpadeQ22
  - ssavi-ict
  - victoriacheng15
---

## Write a programme to find the square of a number

```txt
Input  : 5
Output : 25
```

---

<CodeBlock>

```python
# input
n=int(input('Input: '))

# output
print('Output: ',n**2)
```

```java
import java.util.*;

public class Square {
    public static void main(String[] args) {
        // scanner class to take input
        Scanner sc = new Scanner(System.in);

        // input number
        System.out.print("Input  : ");
        int n = sc.nextInt();

        // squaring n
        int squareOfn = n * n;

        // printing output
        System.out.println("Output : " + squareOfn);
    }
}
```

```c
#include <stdio.h>

int main()
{
    int N;
    printf("Input  : ");
    scanf("%d", &N);
    printf("Output : %d\n", N * N);
    return 0;
}
```

```cpp
#include <iostream>

using namespace std;

int main()
{
    int N;
    cout << "Input  : ";
    cin >> N;
    cout << "Output : " << N * N << endl;
    return 0;
}
```

```javascript
function squareNum(num) {
  return num * num;
}

const input = 5;
console.log("Input  :", input);
console.log("output :", squareNum(input));
```

</CodeBlock>
