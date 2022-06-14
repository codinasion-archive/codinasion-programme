---
title: Feet to Inches
description: Write a programme to convert feet to inches
image: hero.png
tags:
  - c
  - python
  - java
  - cpp
  - js
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

```python
print("Output :", int(input("Input  : ")) * 12)
```

```java
import java.util.Scanner;

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

```cpp
#include <iostream>

int main(void)
{
    int feet;
    std::cout << "Input  : ";
    std::cin >> feet;
    std::cout << "Output : " << feet * 12.0 << std::endl;
    return 0;
}
```

```javascript
"use strict";

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Input  : ", (inches) => {
  const result = parseInt(inches) * 12;
  if (!isNaN(result)) {
    console.log(`Output : ${result}`);
  } else {
    console.log("An Error occured");
  }
  rl.close();
});
```

</CodeBlock>
