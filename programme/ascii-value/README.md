## Write a programme to print ASCII Value of a character.

```
Input  : A
Output : 65
```

---

<CodeBlock slots="heading, code" repeat="5" languages="Python, C#, Java, C++, C" />

#### Python

```python
# input character
character = input("Enter the Character : ")

# output ASCII value
print("ASCII Value is : ", ord(character))
```

#### C#

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

#### Java

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

#### C++

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


#### C

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
