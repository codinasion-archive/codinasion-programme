#include<stdio.h>

int main(){
    double radius;
    printf("Enter the radius: \n");
    scanf("%lf", &radius);
    double area = (4/3) * 3.141 * radius * radius * radius;
    printf("The volume of sphere: %lf\n", area);
    return 0;
}