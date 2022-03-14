// Write a program to print the minimum of given numbers
#include <stdio.h>
#include <limits.h>

int main () {
    // Initializes the variable as the maximum integer possible
    int min= INT_MAX;
    int test;

    printf ("Enter numbers (enter 0 to stop)\n");
    // Input one number at a time
    while (test !=0) {     
        scanf ("%i",&test); 
        if (test < min) min = test;
    }; 
    // Output
    printf ("%i\n",min); 
    return 0;
}