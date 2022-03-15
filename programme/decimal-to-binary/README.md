## Write a programme to convert decimal number to binary.

```
Input : 8
Output : 1000

Input : 5
Ouput : 101
```

---

<CodeBlock slots="heading, code" repeat="2" languages="C, Python" />

#### C

```c
#include <stdio.h>

int decimal_to_binary(int n) {
    int bin = 0;
    int rem, i = 1;

    while (n != 0) {
        rem = n % 2;
        n /= 2; // Same as n = n / 2
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int main() {
    int decimal;
    printf("Input : ");
    scanf("%d", &decimal);
    printf("Output : %d\n", decimal_to_binary(decimal));
    return 0;
}
```

#### Python

```python
decimal = int(input("Input : "))
binary = bin(decimal).replace("0b", "") # 0b is the prefix created by the 'bin' function, so that, we need to replace it with a blank character
print(f"Ouput : {binary}")
```