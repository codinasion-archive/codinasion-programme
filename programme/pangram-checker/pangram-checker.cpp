// Write a programme to check Pangram sentence
#include <iostream>

using namespace std;

int main()
{
    // Taking an array of character of max size 100
    char str[100];

    // Scanning the input line
    cout << "Input  : ";
    scanf("%[^\n]s", str);

    // isPangram is a variable that store if a sentence is Pangram or not
    char isPangram;

    // As per description, we are checking if a-z is present or not
    for (char i = 'a'; i <= 'z'; i++)
    {
        // Iterating variable for given string
        int j;

        // Iterating through given string
        for (j = 0; str[j] != '\0'; j++)
        {

            // Checking the character in the given sentence in Uppercase (A-Z) or not
            if (str[j] >= 'A' && str[j] <= 'Z')
            {

                // Change the character into Lowercase (a-z) if it is Uppercase (A-Z)
                str[j] += 32;
            }

            // We found ith alphabet
            if (str[j] == i)
            {
                // Breaking from the loop as we
                break;
            }
            // do not have to check more after one alphabet at least once
        }
        // If we reach to the end of the string and still we do not locate an
        if (str[j] == '\0')
        {
            // alphabet in the string, then the sentence will not be a pangram
            isPangram = 'n';

            // As we are sure it is not a pangram sentence, then just getting out from the loop
            break;
        }
    }

    cout << "Output : ";
    if (isPangram == 'n')
    {
        cout << "Not a pangram sentence\n";
    }
    else
    {
        cout << "Pangram Sentence\n";
    }

    return 0;
}
