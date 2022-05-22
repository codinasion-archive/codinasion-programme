---
title: Area of Circle
description: Write a programme to find the area of circle
tags:
  - python
  - java
  - cpp
  - c
contributors:
  - theanorak
  - NeelPatel31
  - karthiksbh
  - ClasherKasten
---

## Write a programme to find the area of circle.

```txt
r : 3
Area : 28.27
```

---

<CodeBlock>

```python
import math

# radius input from user
r = int(input("Enter radius: "))

# output
print('Area: ', round((math.pi*(r**2)),2))
```

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

```c
#include <stdio.h>

#define PI 3.141f

int main(void) {
    float r;
    printf("Enter r: ");
    scanf("%f", &r);

    float area = PI * r * r;

    printf("Area: %.2f\n", area);
}
```

</CodeBlock>
