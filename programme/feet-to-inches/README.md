---
title: Feet to Inches
description: Write a programme to convert feet to inches
image: hero.png
tags:
  - c
  - python
  - java
contributors:
  - ClasherKasten
---

## Write a programme to convert feet to inches

```txt
Input  : 1
Output : 12
```

---

<CodeBlock>

```c
#include <stdio.h>

int main(void)
{
    int feet;
    printf("Input  : ");
    scanf("%d", &feet);
    printf("Output : %d\n", feet * 12);
    return 0;
}
```

```py
print("Output :", int(input("Input  : ")) * 12)
```

```java
class FeetToInches {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Input  : ");
            int feet = sc.nextInt();
            System.out.print("Output : ");
            System.out.println(feet * 12);
        } catch (Exception e) {
            System.err.println("An Error occured");
        }
    }
}
```

</CodeBlock>
