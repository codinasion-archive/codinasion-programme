// Write a programme to count capital letters in a string

/*
We do not use dynamic memory allocation that's why we initialise a 100 chars input
if we add an input more than 100 characters long the programmewill print some random(random is not quite the word but bare with me)
number.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

  char givenInputStringFromUser[100];
  int capitalLettersCounter = 0;
  printf("Enter text to count capital letters : ");
  gets(givenInputStringFromUser);

  int inputLength = strlen(givenInputStringFromUser);
  for (int i = 0; i < inputLength; i++)
  {

    if (isupper(givenInputStringFromUser[i]))
    {
      capitalLettersCounter++;
    }
  }

  printf("\nOutput : %d\n", capitalLettersCounter);
}
