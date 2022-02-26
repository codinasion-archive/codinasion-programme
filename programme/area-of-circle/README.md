## Write a programme to find the area of circle.

```
r : 3
Area : 28.27
```

---

<CodeBlock slots="heading, code" repeat="2" languages="Python, Java" />

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
