---
title: Matrix Multiplication
description: Write a program to print multiplication of 2 matrices
tags:
  - python
contributors:
  - ShruAgarwal
---

## Write a program to print multiplication of 2 matrices

First matrix
```txt
1  1  1
2  2  2 
3  3  3 
```

Second matrix
```txt
1  1  1
2  2  2 
3  3  3 
```

Product matrix
```txt
6  6  6
12 12 12
18 18 18
```

---

<CodeBlock>

```python
# first matrix (3x3)
A = [[1, 1, 1],
     [2, 2, 2],
     [3, 3, 3]]

# second matrix
B = [[1, 1, 1],
     [2, 2, 2],
     [3, 3, 3]]

# output form
result = [[0, 0, 0],
          [0, 0, 0],
          [0, 0, 0]]

for i in range(len(A)):
    for j in range(len(B[0])):
        for k in range(len(B)):
            result[i][j] += A[i][k] * B[k][j]

for r in result:
    print(r)
```

</CodeBlock>
