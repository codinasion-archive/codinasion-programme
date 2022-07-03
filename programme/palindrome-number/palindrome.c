// Write a program to check palindrome number
#include <stdio.h>

char *checkPalindrome(int a)
{
    int pal = 0, n;
    int original = a;
    while (a > 0)
    {
        n = a % 10;
        pal = pal * 10 + n;
        a = a / 10;
    }
    if (original == pal)
    {
        return "Palindrome number";
    }
    return "Not palindrome number";
}

int main()
{
    int num, b = 0;
    printf("Input  : ");
    scanf("%d", &num);
    printf("Output : %s\n", checkPalindrome(num));
    return 0;
}
