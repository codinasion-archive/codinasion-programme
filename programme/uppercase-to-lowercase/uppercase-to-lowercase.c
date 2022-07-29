// Write a programme to convert uppercase string to lowercase
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
    if (input[i] >= 'A' && input[i] <= 'Z')
    {
      input[i] = input[i] + 32;
    }
  }
  printf("\nString in Upper Case : %s\n", input);
  return 0;
}
