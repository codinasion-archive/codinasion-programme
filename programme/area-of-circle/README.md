## Write a programme to find the area of circle.

```
r : 3
Area : 28.27
```

---

<CodeBlock slots="heading, code" repeat="3" languages="Python, Java, C++" />

#### Python

```python
import math

# radius input from user
r = int(input("Enter radius: "))

# output
print('Area: ', round((math.pi*(r**2)),2))
```

#### Java

```java
import java.util.Scanner;

public class solution {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the radius : ");

		// taking radius input
		int r = sc.nextInt();

		// calculating area of circle
		double area = Math.PI * r * r;

		// rounding the answer to 2 decimal places
		double answer = (double) Math.round(area * 100) / 100;

		// printing the final answer
		System.out.println("Area of circle : " + answer);

		sc.close();
	}
}
```

#### C++

```cpp
#include <bits/stdc++.h>
using namespace std;
#define pi 3.141

int main()
{
    int r;
    
    // input radius
    cout << "Enter radius: ";
    cin >> r;

    // output area
    cout << "Area: " << floor((pi * r * r) * 100) / 100;
}
```
