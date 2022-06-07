---
title: Decimal to binary
description: Write a programme to convert decimal number to binary
image: hero.png
tags:
  - c
  - python
  - java
  - cpp
  - cs
contributors:
  - RuiL1904
  - NeelPatel31
  - Mrczarny
---

## Write a programme to convert decimal number to binary.

```txt
Input : 8
Output : 1000

Input : 5
Ouput : 101
```

---

<CodeBlock>

```c
#include <stdio.h>

int decimal_to_binary(int n)
{
    int bin = 0;
    int rem, i = 1;

    while (n != 0)
    {
        rem = n % 2;
        n /= 2; // Same as n = n / 2
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int main()
{
    int decimal;
    printf("Input  : ");
    scanf("%d", &decimal);
    printf("Output : %d\n", decimal_to_binary(decimal));
    return 0;
}
```

```python
decimal = int(input("Input : "))

# 0b is the prefix created by the 'bin' function
binary = bin(decimal).replace("0b", "")

print(f"Output : {binary}")
```

```java
import java.util.Scanner;

public class decimal_to_binary {
    public static void convert(int a) {
        int k = 0;
        String s = "";
        while (a > 0) {
            k = (a % 2);
            s = s + k;
            a = a / 2;
        }
        for (int i = s.length() - 1; i >= 0; i--) {
            System.out.print(s.charAt(i));
        }
    }

    public static void main(String[] args) {
        int a = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Input  : ");
        a = sc.nextInt();
        System.out.print("Output : ");
        convert(a);
        System.out.println("");
        sc.close();
    }
}
```

```cpp
#include <iostream>
#include <string>
using namespace std;

void convert(int a)
{
    int k = 0;
    string s = "";
    while (a > 0)
    {
        k = (a % 2);
        s.append(to_string(k));
        a = a / 2;
    }
    for (int i = s.length() - 1; i >= 0; i--)
    {
        cout << s.at(i);
    }
}

int main()
{
    int a;
    cout << "Input  : ";
    cin >> a;
    cout << "Output : ";
    convert(a);
    cout << endl;
    return 0;
}
```

```cs
using System;

public class Binary
{
    static void Main(string[] args)
    {
        string Binary(int input)
        {
            return Convert.ToString(input, 2);
        }

        // Input number
        Console.Write("Enter decimal number : ");
        int input = int.Parse(Console.ReadLine());

        // bianry output
        Console.WriteLine("\nBinary : " + Binary(input));
    }
}
```

</CodeBlock>
