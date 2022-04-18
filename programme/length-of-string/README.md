## Write a program to print the length of a string

```
Input  : abcd
Output : 4
```

---

<CodeBlock slots="heading, code" repeat="5" languages="C, C++, C#, Python, Java" />

#### C

```c
#include <stdio.h>

#define LIMIT 32

int main()
{
  int length;
  char inputstr[LIMIT];

  printf("Input  : ");
  scanf("%s", inputstr);
  for (length = 0; inputstr[length] != '\0'; length++)
    ;
  printf("Output : %d\n", length);
  return 0;
}
```

#### C++

```cpp
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  // string variable
  string str;

  // input
  cout << "Please enter a string : ";
  getline(cin, str);

  // output
  cout << "Length of string is : " << str.size() << endl;

  return 0;
}
```

#### C#

```cs
using System;

public class LengthOfString
{
    static void Main(string[] args)
    {
        // Input string
        Console.Write("Input  : ");
        string input = Console.ReadLine();

        // Output length of string
        Console.WriteLine("Output : " + input.Length);
    }
}
```

#### Python

```python
n = input("Input Enter a text : ")

print(f"\nLength of the string is {len(n)}")
```

#### Java

```java
import java.util.Scanner;

public class StringLength {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter string : ");
        String input = scanner.next();
        System.out.println("\nLength of string : " + input.length());
        scanner.close();
    }
}
```
