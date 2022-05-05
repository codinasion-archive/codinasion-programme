## Write a program to compute the volume of a Cylinder

Volume of a cylinder = ` radius ` * ` radius ` * ` height ` * ` π `

```
Radius : 8
Height : 10

Volume : 2010.62
```

---

<CodeBlock slots="heading, code" repeat="4" languages="C, Python, Java, C++" />

#### C

```c
#include <stdio.h>
#include <math.h>

int main()
{
    float radius;
    float height;
    float volume;

    printf("Radius : ");
    scanf("%f", &radius);

    printf("Height : ");
    scanf("%f", &height);

    volume = (radius * radius) * height * M_PI;

    printf("\nVolume : %.2f\n", volume);
    return 0;
}
```

#### Python

```python
import math

# Get radius and height from user
enter_radius = int(input('Radius : '))
enter_height = int(input('Height : '))

# Calculate volume
volume = enter_radius * enter_radius * enter_height * math.pi

# Print result
print("\nVolume : {:0.2f}".format((volume)))
```

#### Java

```java
import java.util.Scanner;

public class volumeOfCylinder {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // taking radius input
        System.out.print("Enter the radius : ");
        int r = sc.nextInt();

        // taking height input
        System.out.print("Enter the height : ");
        int h = sc.nextInt();

        // calculating Volume of cylinder
        double volume = Math.PI * r * r * h;

        // rounding the answer to 2 decimal places
        double answer = (double) Math.round(volume * 100) / 100;

        // printing the final answer
        System.out.println("\nVolume of cylinder : " + answer);

        sc.close();

    }
}
```

#### C++

```cpp
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float radius, height, volume;

    cout << "Enter Radius of Cylinder : ";
    cin >> radius;
    cout << "Enter Height of Cylinder : ";
    cin >> height;

    // value of PI is defined in M_PI in math.h
    volume = M_PI * radius * radius * height;

    cout << endl
         << "Volume of Cylinder is : " << volume << endl;

    return 0;
}
```
