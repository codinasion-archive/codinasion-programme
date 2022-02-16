# Collision of Balls

Write a computer graphics programme to show collision of balls.

```c
#include <graphics.h>

int main()
{
    int d = DETECT, m = 0;
    initgraph(&d, &m, NULL);

    // radius of circle
    int radius = 50;

    // starting x of centres
    int x1 = 70;
    int x2 = 570;

    // initial position
    int i1 = 70;
    int i2 = 570;

    // final position
    int d1 = ((x1 + x2) / 2) - radius;
    int d2 = ((x1 + x2) / 2) + radius;

    // y of centers
    int y = 100;

    // loop counter
    int loop = 1;

    while (loop != 5)
    {
        // moving in
        while (x1 != d1 && x1 != d2)
        {
            circle(x1, y, radius);
            circle(x2, y, radius);
            x1 += 1;
            x2 -= 1;
            delay(5);
            cleardevice();
        }

        cleardevice();

        // moving out
        while (x1 != i1 && x1 != i2)
        {
            circle(x1, y, radius);
            circle(x2, y, radius);
            x1 -= 1;
            x2 += 1;
            delay(5);
            cleardevice();
        }
        // increase loop counter
        loop += 1;
    }

    closegraph();
}
```

![collision of balls](./assets/collision.gif)
