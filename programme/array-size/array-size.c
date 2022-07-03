// write a program to get length of an array
#include <stdio.h>

int main()
{
    int Length = 0;

    int arr[] = {2, 4, 6, 8, 9, 4}; // 6 elements

    // Calculate length of the array ( Number of elements)
    Length = sizeof(arr) / sizeof(int);

    // display array
    printf("Array : { ");
    for (int i = 0; i < Length; i++)
    {
        if (i == Length - 1)
        {
            printf("%d }\n", arr[i]);
        }
        else
        {
            printf("%d, ", arr[i]);
        }
    }

    // display array length
    printf("\nArray length : %d\n", Length);

    return 0;
}
