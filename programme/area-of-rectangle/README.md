## Write a program to compute the area of a rectangle

```
length  : 2
breadth : 3

area : 6
```

---

<CodeBlock slots="heading, code" repeat="4" languages="Python, C, C,java++" />

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

### java
```java
import java.util.Scanner;

public class area {

	public static void main(String[] args) {
   		    Scanner sc = new Scanner(System.in);
	        System.out.print("Enter the length : ");

	        // taking length input
	        int length = sc.nextInt();

	        System.out.print("\nEnter the breadth : ");

	        //taking breadth input
	        int breadth = sc.nextInt();

	        // calculating area of a rectangle
	        int area =  length * breadth;


	        // printing the final answer
	        System.out.println("Area of rectangle : " + area);

	        sc.close();


	}

}
```