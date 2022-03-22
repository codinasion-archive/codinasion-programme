## Write a programme to find area of triangle

```
a : 10
b : 17
c : 21

s : 24

area : 84
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, C++" />

#### Python

```python
a = float(input('Enter the length of first side  : '))
b = float(input('Enter the length of second side : '))
c = float(input('Enter the length of third side  : '))

s = (a + b + c) / 2

# calculate and output area
area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
print('\nThe area of the triangle is %0.2f' % area)
```

#### C++

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a : ";
    cin >> a;

    cout << "Enter b : ";
    cin >> b;

    cout << "Enter c : ";
    cin >> c;

    float s = (float)(a + b + c) / 2;

    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "\ns : " << s << endl;
    cout << "\nArea : " << area << endl;

    return 0;
}
```
