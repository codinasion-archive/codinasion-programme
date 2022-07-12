// Write a programme to check even or odd string

#include <stdio.h>
#include <string.h>

void check_even(char *input)
{
  if (strlen(input) % 2 == 0)
  {
    printf("Even String\n");
  }
  else
  {
    printf("Odd String\n");
  }
}

int main()
{
  char *first = "hiithere";
  printf("Input  : %s\n", first);
  printf("Output : ");
  check_even(first);

  return 0;
}
