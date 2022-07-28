## Write a programme turn all lowercase letters of an input to uppercase

#include <stdio.h>
#include <string.h>
int main() {
   char input[100];
   int i;
   printf("\nEnter a string : ");
   gets(input);
   for (i = 0; input[i]!='\0'; i++) {
      if(input[i] >= 'a' && input[i] <= 'z') {
         input[i] = input[i] -32;
      }
   }
   printf("\nString in Upper Case = %s", input);
   return 0;
}
