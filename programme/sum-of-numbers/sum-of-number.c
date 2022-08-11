/*Programme to caclulate sum of 4 single digit numbers*/

#include <stdio.h>

int main()
{
   char str[100];
   gets(str);
   int a = str[0] - '0';
   int b = str[2] - '0';
   int c = str[4] - '0';
   int d = str[6] - '0';
   int sum = a + b + c + d;
   
   printf("%d", sum);
   return 0;

}
