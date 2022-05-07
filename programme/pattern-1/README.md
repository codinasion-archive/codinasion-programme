---
title: Print pattern
description: Write a programme to print given pattern
tags:
  - python
contributors:
  - yacine-zitouni
---

## Write a program to print the given pattern

```txt
* * * * *
  * * * *
    * * *
      * *
        *
```

---

<CodeBlock>

```python
# print pattern function
def printPattern(n):
    for i in reversed(range(1,n+1)):
        print((i*" *").rjust(2*n))

# test
printPattern(5)
```

</CodeBlock>
