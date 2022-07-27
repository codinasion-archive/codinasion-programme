#uppercase to lowercase String in C

#include <stdio.h>
#include <string.h>
int main() {
   char input[100];
   int i;
   printf("\nEnter a string : ");
   gets(input);
   for (i = 0; input[i]!='\0'; i++) {
      if(input[i] >= 'A' && input[i] <= 'Z') {
         input[i] = input[i] +32;
      }
   }
   printf("\nString in Upper Case = %s", input);
   return 0;
}
