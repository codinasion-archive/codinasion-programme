// Write a programme to convert lowercase string to uppercase
#include <stdio.h>
#include <string.h>

int main()
{
  char input[100];
  int i;
  printf("Enter a string : ");
  gets(input);
  for (i = 0; input[i] != '\0'; i++)
  {
    if (input[i] >= 'a' && input[i] <= 'z')
    {
      input[i] = input[i] - 32;
    }
  }
  printf("\nString in Upper Case : %s\n", input);
  return 0;
}
