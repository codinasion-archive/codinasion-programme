---
metatitle: Shrinking and expanding ball
description: Write a computer graphics programme to show a shrinking and expanding ball
slug: /cg/shrinking-and-expanding-ball
---

# Shrinking and Expanding Ball

---

Write a computer graphics programme to show a shrinking and expanding ball.

---

```c title=cg/shrinking-and-expanding-ball.c lineNumbers
#include <graphics.h>

int main() {
    int d=DETECT, m=0;
    initgraph(&d, &m, NULL);

    // starting radius
    int start = 1;

    // ending radius
    int end = 239;

    // radius variable
    int radius = 1;

    // loop counter
    int loop = 1;

    while(loop != 5) {

        // expanding
        while(radius != end) {
            circle(319, 239, radius);
            radius += 1;
            delay(10);
            cleardevice();
        }

        // shrinking
        while(radius != start) {
            circle(319, 239, radius);
            radius -= 1;
            delay(10);
            cleardevice();
        }

        // increasing loop counter
        loop += 1;
    }

    closegraph();
}
```

![shrinking and expanding ball](./assets/demo.gif)

<br/>

---
