---
title: Matrix Multiplication
description: Write a program to print multiplication of 2 matrices
tags:
  - python
  - c
  - cpp
contributors:
  - ShruAgarwal
  - ssavi-ict
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

```c
#include <stdio.h>

int matrix1[10][10], matrix2[10][10], result[10][10];

int main()
{

    int m, n, p, q;

    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter Matrix1\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of second matrix\n");
    scanf("%d%d", &p, &q);

    if (n != p)
    {
        printf("No. of columns in Matrix1 is not equal to the No. of rows in Matrix2.\n");
        return 0;
    }

    printf("Enter Matrix2\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            int sum = 0;
            for (int l = 0; l < p; l++)
            {
                sum = sum + matrix1[i][l] * matrix2[l][j];
            }
            result[i][j] = sum;
        }
    }

    printf("\nProduct:-\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```

```cpp
#include <iostream>

using namespace std;

int matrix1[10][10], matrix2[10][10], result[10][10];

int main()
{

    int m, n, p, q;

    cout << "Enter the number of rows and columns of first matrix\n";
    cin >> m >> n;
    cout << "Enter Matrix1\n";

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter the number of rows and columns of second matrix\n";
    cin >> p >> q;

    if (n != p)
    {
        cout << "No. of columns in Matrix1 is not equal to the No. of rows in Matrix2.\n";
        return 0;
    }

    cout << "Enter Matrix2\n";
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            int sum = 0;
            for (int l = 0; l < p; l++)
            {
                sum = sum + matrix1[i][l] * matrix2[l][j];
            }
            result[i][j] = sum;
        }
    }

    cout << "Product:-\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
```

</CodeBlock>
