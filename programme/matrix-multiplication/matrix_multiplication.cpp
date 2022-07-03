// Write a program to print multiplication of 2 matrices
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
