/**
 * Divides two numbers
 */

#include <stdio.h>
#include <stdlib.h> // for the exit function
#include <assert.h> // for the assert function

// call to divide function with two parameters
double divide(int num1, int num2);
void test(void);

int main(void)
{
    int num1, num2;
    double output;

    test();

    printf("Input the Dividend: ");
    scanf("%d", &num1);
    printf("Input the Divisor: ");
    scanf("%d", &num2);
    output = divide(num1, num2);
    printf("\nOutput : %.1lf\n", output);

    return 0;
}

// fuction which takes two parameters first one is Dividend and second one is Divisor
double divide(int num1, int num2)
{
    // if divisor is 0, exit the program
    if (num2 == 0)
    {
        printf("Division by 0 is not allowed!\n");
        exit(EXIT_FAILURE);
    }
    return (double)num1 / (double)num2;
}

// checks correctness of the divide function
void test(void)
{
    assert(divide(4, 2) == 2.0);
    assert(divide(2, 4) == 0.5);
}
