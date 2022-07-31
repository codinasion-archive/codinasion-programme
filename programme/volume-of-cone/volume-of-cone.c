// write a programme to find the volume of a cone

#include <stdio.h>

int main(int argc, char *argv[])
{
  double pi = 3.14159;
  double radius, height, volume;
  printf("Enter radius : ");
  scanf("%lf", &radius);
  printf("Enter height : ");
  scanf("%lf", &height);

  volume = pi * radius * radius * height / 3.0;

  printf("\nRadius of cone : %.2lf\n", radius);
  printf("Height of cone : %.2lf\n", height);
  printf("Volume of cone : %.2lf\n", volume);
  return 0;
}
