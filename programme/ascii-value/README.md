---
title: ASCII Value
description: Write a programme to print ASCII Value of a character
image: hero.png
tags:
  - python
  - cs
  - java
  - cpp
  - c
  - go
  - jl
contributors:
  - Mrczarny
  - PA11TEDDU
  - KikiManjaro
  - NeelPatel31
  - RuiL1904
  - MadhuS-1605
  - SanjayShetty01
---

## Write a programme to print ASCII Value of a character

```txt
Input  : A
Output : 65
```

---

<CodeBlock>

```python
# input character
character = input("Enter the Character : ")

# output ASCII value
print("ASCII Value is : ", ord(character))
```

```cs
using System;
using System.Text;

public class ASCIIValue
{
    static void Main(string[] args)
    {
        int convert(string input)
        {
            return Encoding.ASCII.GetBytes(input)[0];
        }

        // Input character
        Console.Write("Enter character : ");
        string input = Console.ReadLine();

        // output ASCII value
        Console.WriteLine("ASCII Value : " + convert(input));
    }
}
```

```java
import java.util.Scanner;

public class ASCIIValue {
    public static void main(String args[]) {
        // Input character
        System.out.print("Enter character: ");
        Scanner sc = new Scanner(System.in);
        char chr = sc.next().charAt(0);

        // output ASCII value
        int asciiValue = chr;
        System.out.println("ASCII value: " + asciiValue);
    }
}
```

```cpp
#include<iostream>
using namespace std;

int main(){
    char a;
    cout << "Input: ";
    cin >> a;
    cout << "Output: " << int(a) << endl;
    return 0;
}
```

```c
#include <stdio.h>

int main()
{
    char a;
    printf("Enter the character : ");
    scanf("%c", &a);
    printf("ASCII value is : %d\n", (int)(a));
    return 0;
}
```

```go
package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Enter Any Character to find ASCII : ")
	ch, _ := reader.ReadByte()
	fmt.Printf("\nThe ASCII value of '%c' : %d\n", ch, ch)
}
```

```julia

print("Enter the Character : ")
c = readline()

char = only(c)

println("ASCII Value is : ", Int(char))
```

</CodeBlock>
