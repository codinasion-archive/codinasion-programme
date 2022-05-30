---
title: Pangram Checker
description: Write a programme to check Pangram sentence.
tags:
  - c
  - cpp
contributors:
  - ssavi-ict
---

## Write a programme to check Pangram sentence.
A pangram is a sentence containing every letter in the English alphabet.

```txt
Input  : The quick brown fox jumps over the lazy dog
Output : Pangram sentence
```

---

<CodeBlock>

```c
#include <stdio.h>

int main()
{
    char str[100];                              // Taking an array of character of max size 100
    scanf("%[^\n]s",str);                       // Scanning the input line
    char isPangram;                             // isPangram is a variable that store if a sentence is Pangram or not
    for(char i='a'; i<='z'; i++){               // As per description, we are checking if a-z is present or not
        int j;                                  // Iterating variable for given string
        for(j=0; str[j]!='\0'; j++){            // Iterating through given string
            if(str[j]>='A' && str[j]<='Z'){     // Checking the character in the given sentence in Uppercase (A-Z) or not
                str[j] += 32;                   // Change the character into Lowercase (a-z) if it is Uppercase (A-Z)
            }
            if(str[j] == i){                    // We found ith alphabet
                break;                          // Breaking from the loop as we 
            }                                   // do not have to check more after one alphabet at least once
        }
        if(str[j]=='\0') {                      // If we reach to the end of the string and still we do not locate an
            isPangram = 'n';                    // alphabet in the string, then the sentence will not be a pangram
            break;                              // As we are sure it is not a pangram sentence, then just getting out from the loop
        }
    }
    
    if(isPangram == 'n'){                      
        printf("Not a pangram sentence\n");
    }
    else{
        printf("Pangram Sentence\n");
    }

    return 0;
}
```

```cpp
#include <iostream>

using namespace std;

int main()
{
    char str[100];                              // Taking an array of character of max size 100
    scanf("%[^\n]s",str);                       // Scanning the input line
    char isPangram;                             // isPangram is a variable that store if a sentence is Pangram or not
    for(char i='a'; i<='z'; i++){               // As per description, we are checking if a-z is present or not
        int j;                                  // Iterating variable for given string
        for(j=0; str[j]!='\0'; j++){            // Iterating through given string
            if(str[j]>='A' && str[j]<='Z'){     // Checking the character in the given sentence in Uppercase (A-Z) or not
                str[j] += 32;                   // Change the character into Lowercase (a-z) if it is Uppercase (A-Z)
            }
            if(str[j] == i){                    // We found ith alphabet
                break;                          // Breaking from the loop as we 
            }                                   // do not have to check more after one alphabet at least once
        }
        if(str[j]=='\0') {                      // If we reach to the end of the string and still we do not locate an
            isPangram = 'n';                    // alphabet in the string, then the sentence will not be a pangram
            break;                              // As we are sure it is not a pangram sentence, then just getting out from the loop
        }
    }
    
    if(isPangram == 'n'){                      
        cout<< "Not a pangram sentence\n";
    }
    else{
        cout<< "Pangram Sentence\n";
    }

    return 0;
}
```

</CodeBlock>
