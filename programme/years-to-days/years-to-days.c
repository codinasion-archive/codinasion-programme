// Write a programme to convert years to days

#include <stdio.h>

int main()
{
  int years, days;

  printf("Years : ");
  scanf("%d", &years);
  days = years * 365;
  printf("Days  : %d", days);
  return 0;
}
