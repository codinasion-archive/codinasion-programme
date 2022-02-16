# Smoking Guy

Write a computer graphics programme for Smoking Guy.

```c
#include <graphics.h>
#include <stdio.h>

int main() {

    // start graph
    int d=DETECT, m=0;
    initgraph(&d, &m, NULL);

    // face
    circle(200, 200, 100); // round face
    circle(150,170,20); // left eye
    circle(150,170,3); // left pupil
    circle(250,170,20); // right eye
    circle(250,170,3); // right pupil
    line(190, 190, 170, 230); // nose
    line(210, 190, 230, 230); // nose
    line(170, 230, 230, 230); // nose
    arc(200,200,40,140,80); // lower mouth
    line(138,250,262,250); // upper mouth
    line(150,263,250,263); // teeth dividor

    // cigar
    line(200, 263, 350, 258); // upper
    line(200, 263, 350, 268); // lower
    ellipse(350, 263, 0, 360, 3, 5); // front

    //body
    line(150, 290, 50, 400); // left line
    line(250, 290, 350, 400); // right line
    line(50, 400, 350, 400); // bottom line

    //smoke
    ellipse(370,260,0,360,10,20); // first
    ellipse(400,230,0,360,10,15); // second
    ellipse(430,200,0,360,10,10); // third
    ellipse(460,170,0,360,5,5); // forth
    ellipse(480,150,0,360,3,3); // fifth

    // close graph
    delay(4000);
    closegraph();
}
```

![static smoking guy](./assets/static.png)

<br/>

<details>
<summary>Animated Smoking Guy</summary>
<br/>

```c
#include <graphics.h>
#include <stdio.h>

void guy() {
    // face
    circle(200, 200, 100); // round face
    circle(150,170,20); // left eye
    circle(150,170,3); // left pupil
    circle(250,170,20); // right eye
    circle(250,170,3); // right pupil
    line(190, 190, 170, 230); // nose
    line(210, 190, 230, 230); // nose
    line(170, 230, 230, 230); // nose
    arc(200,200,40,140,80); // lower mouth
    line(138,250,262,250); // upper mouth
    line(150,263,250,263); // teeth divider

    // cigar
    line(200, 263, 350, 258); // upper
    line(200, 263, 350, 268); // lower
    ellipse(350, 263, 0, 360, 3, 5); // front

    //body
    line(150, 290, 50, 400); // left line
    line(250, 290, 350, 400); // right line
    line(50, 400, 350, 400); // bottom line
}

int main() {
    // start graph
    int d=DETECT, m=0;
    initgraph(&d, &m, NULL);

    int i=0;
    while(i!=10) {
        guy();
        ellipse(370,260,0,360,10,20); // first
        delay(100);
        cleardevice();
        guy();
        ellipse(400,230,0,360,10,15); // second
        delay(100);
        cleardevice();
        guy();
        ellipse(430,200,0,360,10,10); // third
        delay(100);
        cleardevice();
        guy();
        ellipse(460,170,0,360,5,5); // forth
        delay(100);
        cleardevice();
        guy();
        ellipse(480,150,0,360,3,3); // fifth
        i += 1;
    }

    // close graph
    closegraph();
}
```

![animated smoking guy](./assets/animated.gif)

</details>
