// Write a programme to merge two strings
#include <stdio.h>
#include <string.h>

int main()
{
    /* Define a temporary variable */
    char mergedString[100], str1[50], str2[50];

    printf("Enter String 1 : ");
    scanf("%s", str1);
    printf("Enter String 2 : ");
    scanf("%s", str2);

    strcpy(mergedString, str1);
    strcat(mergedString, str2);

    /* Display the concatenated strings */
    printf("\nOutput : %s\n", mergedString);

    return 0;
}
