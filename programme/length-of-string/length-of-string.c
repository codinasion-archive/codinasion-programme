// Write a programme to find the length of string.

#include <stdio.h>

#define LIMIT 32

int main()
{
  int length;
  char inputstr[LIMIT];

  printf("Input  : ");
  scanf("%s", inputstr);
  for (length = 0; inputstr[length] != '\0'; length++)
    ;
  printf("Output : %d\n", length);
  return 0;
}
