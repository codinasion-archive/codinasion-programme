#include<stdio.h>

int main(int argc, char *argv[])
{
	double pi = 3.14159;
	double radius,height,volume;
	printf("enter radius : ");
	scanf("%lf", &radius);
	printf("enter height : ");
	scanf("%lf", &height);

	volume = pi * radius * radius * height / 3.0;

	printf("radius : %lf\n", radius);
	printf("height : %lf\n\n", height);
	printf("volume of cone: %lf\n", volume);
    return 0;
}
