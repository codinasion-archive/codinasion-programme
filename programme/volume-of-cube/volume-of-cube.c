// Write a programme to find volume of a cube
#include <stdio.h>

int Vol_cube(int s)
{
  int Volume = s * s * s;
  return Volume;
}

int main()
{
  int side;
  printf("Enter cube side : ");
  scanf("%d", &side);

  printf("\nVolume of cube : %d\n", Vol_cube(side));

  return 0;
}
