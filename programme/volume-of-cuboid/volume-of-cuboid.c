#include <stdio.h>

int main(){
  int length,width,height,Volume;
  printf("Enter length,width and height of Cuboid.\n");
  scanf("%d%d%d", &length, &width, &height);
  Volume = length*width*height;
  printf("Volume:%d",Volume);
  return 0;
}
