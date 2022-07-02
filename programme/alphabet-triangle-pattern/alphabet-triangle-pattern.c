// Write a program to print alphabet triangle pattern
#include <stdio.h>

void pattern(int a)
{
  printf("Output :\n");
  for (int i = 1; i <= a; i++)
  {
    int c = 65;
    for (int k = a; k > i; k--)
    {
      printf(" ");
    }
    for (int j = 1; j <= 2 * i - 1; j++)
    {
      if (j < i)
      {
        printf("%c", c);
        c++;
      }
      else
      {
        printf("%c", c);
        c--;
      }
    }
    printf("\n");
  }
}

int main()
{
  int a;
  printf("Input : ");
  scanf("%d", &a);
  pattern(a);
  return 0;
}
