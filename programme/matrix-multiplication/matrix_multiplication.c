// Write a programme to print multiplication of 2 matrices
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
