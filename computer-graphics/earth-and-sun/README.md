---
metatitle: Earth and Sun
description: Write a computer graphics programme to show earth and sun
slug: /cg/earth-and-sun
---

# Earth and Sun

---

Write a computer graphics programme to show earth and sun.

---

```c title=cg/earth-and-sun.c lineNumbers
#include <graphics.h>
#include <math.h>

int main()
{
    int d = DETECT, m = 0;
    initgraph(&d, &m, NULL);

    // sun
    circle(319, 239, 50);

    // orbit
    circle(319, 239, 200);

    // horizontal size of orbit
    int startx = 119;
    int endx = 519;

    // vertical size of orbit
    int starty = 39;
    int endy = 439;

    // center of orbit
    int midx = (startx + endx) / 2;
    int midy = (starty + endy) / 2;

    // loop counter
    int loop = 1;

    while (loop != 2)
    {
        for(int i=0; i<=360; i++) {

            // x cordinate of earth
			int x=200*cos(i*0.0174533)+midx;
            // y cordinate of earth
			int y=200*sin(i*0.0174533)+midy;

            // print earth
            setcolor(WHITE);
			circle(x, y, 20);

			delay(20);

            // erase earth
			setcolor(BLACK);
			circle(x, y, 20);
        }

        // increase loop counter
        loop += 1;
    }

    closegraph();
}
```

![earth and sun](./assets/demo.gif)

<br/>

---
