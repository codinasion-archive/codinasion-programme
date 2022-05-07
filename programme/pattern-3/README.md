---
title: Print Pattern 3
description: Write a programme to print the given pattern
tags:
  - python
contributors:
  - seraph776
---

## Write a python programme to print the given pattern.

```
Input: 5
```

```
x x x x x
x       x
x       x
x       x
x x x x x

```

<CodeBlock>

```python
def print_pattern(n: int) -> None:
    print("Output : \n")
    for col in range(n):
        for row in range(n):
            if col == 0 or col == n - 1 or row == 0 or row == n - 1:
                print(' * ', end='')
            else:
                print('   ', end='')
        print()


n = int(input("input  : "))
print_pattern(n)
```

</CodeBlock>
