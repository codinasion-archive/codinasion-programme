---
title: Pangram Checker
description: Write a programme to check Pangram sentence.
tags:
  - c
  - cpp
contributors:
  - ssavi-ict
---

## Write a programme to check Pangram sentence

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

    char str[100];
    printf("Input  : ");
    scanf("%[^\n]s", str);

    char isPangram;

    for (char i = 'a'; i <= 'z'; i++)
    {
        int j;
        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                str[j] += 32;
            }
            if (str[j] == i)
            {
                break;
            }
        }
        if (str[j] == '\0')
        {
            isPangram = 'n';
            break;
        }
    }
    printf("Output : ");
    if (isPangram == 'n')
    {
        printf("Not a pangram sentence\n");
    }
    else
    {
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
    char str[100];
    cout << "Input  : ";
    scanf("%[^\n]s", str);

    char isPangram;

    for (char i = 'a'; i <= 'z'; i++)
    {
        int j;
        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[j] >= 'A' && str[j] <= 'Z')
            {
                str[j] += 32;
            }
            if (str[j] == i)
            {
                break;
            }
        }
        if (str[j] == '\0')
        {
            isPangram = 'n';
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
```

</CodeBlock>
