---
title: Print Even Numbers
description: Write a programme to print first n even numbers
tags:
  - python
contributors:
  - PA11TEDDU
---

## Write a programme to print first n even numbers.

```
Input: 5
Output: 0 2 4 6 8
```

---

<CodeBlock>

```python
n = int(input("Enter n : "))
for i in range(0, 2*n):
    if(i % 2 == 0):
        print(i, end=" ")
```

</CodeBlock>
