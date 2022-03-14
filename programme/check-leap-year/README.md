## Write a programme to check leap year

```
Input  : 2020
Output : Leap Year
```
```
Input  : 2021
Output : Not a Leap Year
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, C" />

#### Python

```python
year = int(input("Input  : "))

print("Output : ", end="")

if year % 100 == 0:
    if year % 400 == 0:
        print("Leap Year")
    else:
        print("Not a Leap Year")
else:
    if year % 4 == 0:
        print("Leap Year")
    else:
        print("Not a Leap Year")
```

#### C

```c
#include <stdio.h>

int main() {
    int year;
    
    printf("Input: ");
    scanf("%d", &year);

    if (year % 100 == 0) {
        if (year % 400 == 0) {
            printf("Leap year.\n");
        }
        else {
            printf("Not a leap year.\n");
        }
    }
    else {
        if (year % 4 == 0) {
            printf("Leap year.\n");
        }
        else {
            printf("Not a leap year.\n");
        }
    }
}
```