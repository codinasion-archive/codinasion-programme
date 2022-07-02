// Write a program to check armstrong number
#include <stdio.h>
#include <stdlib.h> /* for atoi function */
#include <ctype.h>  /* for isdigit and isspace functions */
#include <string.h>
#include <math.h>

#define LIMIT 32

int isarmstrong(int, int);
int validinput(char[]);

int main()
{
  char numstr[LIMIT];
  int num;

  printf("Input  : ");
  for (;;)
  {
    scanf("%s", numstr);
    if (validinput(numstr))
      break;
    else
      printf("\nInvalid input.\nInput:  ");
  }
  int len = strlen(numstr);
  num = atoi(numstr);
  if (isarmstrong(num, len))
    printf("Output : armstrong number\n");
  else
    printf("Output : not a armstrong number\n");
  return 0;
}

int isarmstrong(int i, int len)
/* check if int is armstrong number */
{
  int num = i;
  int sum;
  for (sum = 0; num != 0; num /= 10)
    sum += pow(num % 10, len);
  return (sum == i) ? 1 : 0;
}

int validinput(char a[])
/* check if char array can be converted to non-negative int */
{
  int i = 0;
  while (isspace(a[i]))
    i++;
  if (!isdigit(a[i]))
    return 0;
  while (isdigit(a[i]))
    i++;
  if (a[i] != '\0' && !isspace(a[i]))
    return 0;
  else if (a[i] == '\0')
    return 1;
  while (isspace(a[i]))
    i++;
  return (a[i] == '\0') ? 1 : 0;
}
