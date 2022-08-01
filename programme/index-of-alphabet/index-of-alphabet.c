// Write a programme to find index of an alphabet
#include <stdio.h>

int main()
{
  int position;
  char input;
  printf("Enter char that you want to learn his alphabet position : ");
  scanf("%c", &input);
  if (input >= 97)
  {
    position = input - 'a' + 1;
  }
  else
  {
    position = input - 'A' + 1;
  }

  printf("\nIndex of alphabet : %d\n", position);
}
