---
title: Euler's Number
description: Write a programme to compute the value of Euler's Number
tags:
  - python
contributors:
  - LevBernstein
---

## Write a programme to compute the value of Euler's Number

```txt
1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
```

---

<CodeBlock>

```python
from math import factorial

def e(n):
    return sum((1 / factorial(i) for i in range(1, n + 1)))
```

</CodeBlock>
