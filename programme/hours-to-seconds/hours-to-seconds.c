// Write a C programme to convert hours to seconds.

#include <stdio.h>

int main()
{
	double input;
	printf("Hours: ");
	scanf("%lf", &input); 
	int seconds = input * 3600; // seconds conversion

    printf("Seconds: %d\n", seconds);
    return 0;
} 