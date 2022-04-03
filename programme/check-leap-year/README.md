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

<CodeBlock slots="heading, code" repeat="3" languages="Python, C, C++" />

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

int main()
{
    int year;

    // input year
    printf("Input  : ");
    scanf("%d", &year);

    // output result
    printf("Output : ");
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("Leap year\n");
        }
        else
        {
            printf("Not a leap year\n");
        }
    }
    else
    {
        if (year % 4 == 0)
        {
            printf("Leap year\n");
        }
        else
        {
            printf("Not a leap year\n");
        }
    }
}
```

#### C++

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
  cout << "Input  : ";
  int year;
  cin >> year;
  cout << "Output : ";
  if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0))
    cout << "Leap Year\n";
  else
    cout << "Not a Leap Year\n";
}
```
