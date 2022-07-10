#include<stdio.h>

int main(int argc, char *argv[])
{
	double pi = 3.14159;
	double radius,height,volume;

	scanf("enter radius of cone: %lf", &radius);
	scanf("enter height of cone: %lf", &radius);

	volume = pi * radius * radius * height / 3.0;

	printf("volume of cone: %lf", volume);
    return 0;
}

