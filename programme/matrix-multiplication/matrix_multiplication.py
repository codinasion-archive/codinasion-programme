'''
PROBLEM STATEMENT
Write a program to print multiplication of 2 matrices.

First matrix
1  1  1
2  2  2 
3  3  3 

Second matrix
1  1  1
2  2  2 
3  3  3 

Product matrix
6  6  6
12 12 12
18 18 18
'''
# SOLUTION --->

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

# iterating by row of A
for i in range(len(A)):

    # iterating by column by B
    for j in range(len(B[0])):

        # iterating by rows of B
        for k in range(len(B)):
            result[i][j] += A[i][k] * B[k][j]

for r in result:
    print(r)
