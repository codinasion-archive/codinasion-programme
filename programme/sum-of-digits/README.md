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
