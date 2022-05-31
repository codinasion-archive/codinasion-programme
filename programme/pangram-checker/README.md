---
title: Pangram Checker
description: Write a programme to check Pangram sentence
tags:
  - c
  - cpp
  - java
  - js
  - python
contributors:
  - ssavi-ict
  - julyvjo
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

```java
import java.util.HashMap;
import java.util.Scanner;

public class PangramChecker {

	public static void main(String[] args) {
		String alphabet = "abcdefghijklmnopqrstuvwxyz";
		HashMap<Character, Boolean> letters = new HashMap<Character, Boolean>();
		boolean pangram = true;
		Scanner sc = new Scanner(System.in);

		// read input
		System.out.print("Input  : ");
		String input = sc.nextLine();

		// convert string to lower case
		input = input.toLowerCase();

		// iterate for each character in input
		for (int i = 0; i < input.length(); i++) {
			letters.put(input.charAt(i), true);
		}

		// iterate to check if every alphabet character is in the hashmap
		for (int i = 0; i < alphabet.length(); i++) {
			// if an alphabet character is missing then set pangam to false
			if (letters.get(alphabet.charAt(i)) == null) {
				pangram = false;
			}
		}

		System.out.print("Output : ");
		System.out.println(pangram ? "Pangram Sentence" : "Not a pangram sentence");

		sc.close();
	}
}
```

```javascript
function isPangram(input) {
  const alphabet = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'];
  const letters = {};
  let pangram = true;

  // add an entry on "letters" object for every character in input
  for (let i = 0; i < input.length; i++) {
    // convert the read character to lowercase
    char = input.charAt(i).toLowerCase();
    letters[char] = true;
  }

  // iterate through the object for every letter in alphabet
  alphabet.forEach((letter) => {
    // if the letter is not inside of the "letters" object then set pangram to false
    if (!letters[letter]) {
      pangram = false;
    }
  });

  return pangram;
}

const input = "a quick brown fox jumps over the lazy dog";
console.log("Input  :", input);
console.log(
  "Output :",
  isPangram(input) ? "Pangram Sentence" : "Not a pangram sentence"
);
```

```python
def isPangram(_input):
    alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
                'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
    pangram = 1
    letters = {}
    # convert _input to lower case
    _input = _input.lower()

    # iterate for each character in input
    for c in _input:
        letters[c] = 1

    # iterate for each character in alphabet
    # and checks if each one is in letters
    for c in alphabet:
        # if not in letters then set pangram to 0 (false)
        if c not in letters:
            pangram = 0

    return pangram


# ask for input
_input = input('Input  : ')
print("Output : ", end="")
if isPangram(_input):
    print('Pangram Sentence')
else:
    print('Not a pangram sentence')
```

</CodeBlock>
