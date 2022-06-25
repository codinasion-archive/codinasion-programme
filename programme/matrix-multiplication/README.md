---
title: Matrix Multiplication
description: Write a program to print multiplication of 2 matrices
image: hero.png
tags:
  - python
  - c
  - cpp
  - java
  - js
contributors:
  - ShruAgarwal
  - ssavi-ict
  - Anzo52
  - ClasherKasten
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

```java
public class MatrixMultiplication {

  public static int[][] matrixMultiplication(int[][] matrixA, int[][] matrixB) {
    int[][] matrixC = new int[matrixA.length][matrixB[0].length];

    for (int i = 0; i < matrixA.length; i++) {
      for (int j = 0; j < matrixB[0].length; j++) {
        for (int k = 0; k < matrixA[0].length; k++) {
          matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
        }
      }
    }
    return matrixC;
  }

  public static void main(String[] args) {
    int[][] matrixA = { { 1, 1, 1 }, { 2, 2, 2 }, { 3, 3, 3 } };

    int[][] matrixB = { { 1, 1, 1 }, { 2, 2, 2 }, { 3, 3, 3 } };

    System.out.println("First matrix: ");
    for (int i = 0; i < matrixA.length; i++) {
      for (int j = 0; j < matrixA[0].length; j++) {
        System.out.print(matrixA[i][j] + " ");
      }
      System.out.println();
    }

    System.out.println("\nSecond matrix: ");
    for (int i = 0; i < matrixB.length; i++) {
      for (int j = 0; j < matrixB[0].length; j++) {
        System.out.print(matrixB[i][j] + " ");
      }
      System.out.println();
    }

    int[][] matrixC = matrixMultiplication(matrixA, matrixB);

    System.out.println("\nProduct matrix: ");

    for (int i = 0; i < matrixC.length; i++) {
      for (int j = 0; j < matrixC[0].length; j++) {
        System.out.print(matrixC[i][j] + " ");
      }
      System.out.println();
    }
  }
```

```js
"use strict";

const A = [Array(3).fill(1), Array(3).fill(2), Array(3).fill(3)];
const B = [Array(3).fill(1), Array(3).fill(2), Array(3).fill(3)]

let result = [Array(3).fill(0), Array(3).fill(0), Array(3).fill(0)];

for (let i = 0; i < A.length; i++) {
	for (let j = 0; j < B.length; j++) {
		for (let k = 0; k < B.length; k++) {
			result[i][j] += A[i][k] * B[k][j];
		}
	}
}

for (const r of result) {
	console.log(r.toString());
}
```

</CodeBlock>
