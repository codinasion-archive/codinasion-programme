## Write a program to compute the volume of a Cylinder

Volume of a cylinder = ` radius ` * ` radius ` * ` height ` * ` π `

```
Radius : 8
Height : 10

Volume : 2010.62
```

---

<CodeBlock slots="heading, code" repeat="1" languages="C" />

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
