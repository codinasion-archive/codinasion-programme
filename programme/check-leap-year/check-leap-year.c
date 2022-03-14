// Write a programme to check leap year
#include <stdio.h>

int main() {
    int year;
    
    printf("Input: ");
    scanf("%d", &year);

    if (year % 100 == 0) {
        if (year % 400 == 0) {
            printf("Leap year.\n");
        }
        else {
            printf("Not a leap year.\n");
        }
    }
    else {
        if (year % 4 == 0) {
            printf("Leap year.\n");
        }
        else {
            printf("Not a leap year.\n");
        }
    }
}
