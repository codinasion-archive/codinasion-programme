// Write a programme to find volume of a cuboid

#include <stdio.h>

int main()
{
    int length, width, height, Volume;

    // Input
    printf("Enter the length of cuboid : ");
    scanf("%d", &length);
    printf("Enter the width  of cuboid : ");
    scanf("%d", &width);
    printf("Enter the height of cuboid : ");
    scanf("%d", &height);

    // calculate and print volume
    Volume = length * width * height;
    printf("\nVolume of Cuboid : %d\n", Volume);

    return 0;
}
