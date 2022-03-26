## Write a program to compute the area of a rectangle

```
length  : 2
breadth : 3

area : 6
```

---

<CodeBlock slots="heading, code" repeat="3" languages="Python, C, C++" />

#### Python

```python
# input length
x = int(input('length  : '))

# input breadth
y = int(input('breadth : '))

# output area
print('\narea : ', x*y)
```

#### C

```c
#include <stdio.h>
#include <assert.h>

double area_of_rectangle(double length, double breadth);
void test(void);

int main(void)
{
    double area, length, breadth;

    test();

    printf("length : ");
    scanf("%lf", &length);
    printf("breadth : ");
    scanf("%lf", &breadth);
    
    area = area_of_rectangle(length, breadth);
    printf("area : %.1lf\n", area);

    return 0;
}

// calculates the area
double area_of_rectangle(double length, double breadth)
{
    return length * breadth;
}

// checks correctness of the area calculation
void test(void)
{
    assert(area_of_rectangle(2, 3) == 6);
}
```

#### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
  double length, width;

  // input sides
  cout << "Enter length : ";
  cin >> length;

  cout << "Enter breadth : ";
  cin >> width;

  double result = length * width;
  // output area
  cout << "\nArea of rectangle : " << result << endl;

  return 0;
}
```
