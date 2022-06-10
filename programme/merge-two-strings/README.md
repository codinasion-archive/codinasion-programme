---
title: Merge two strings
description: Write a programme to merge two strings
image: hero.png
tags:
  - c
  - cpp
  - java
  - python
  - js
contributors:
  - PhysicsMD
---

## Write a programme to merge two strings

```txt
Input1 : abc
Input2 : def
Output : abcdef
```

---

<CodeBlock>

```c
#include <stdio.h>
#include <string.h>

int main()
{
    char mergedString[100], str1[50], str2[50];

    printf("Enter String 1 : ");
    scanf("%s", str1);
    printf("Enter String 2 : ");
    scanf("%s", str2);

    strcpy(mergedString, str1);
    strcat(mergedString, str2);

    printf("\nOutput : %s\n", mergedString);

    return 0;
}
```

```cpp
#include <iostream>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter String 1 : ";
    cin >> str1;
    cout << "Enter String 2 : ";
    cin >> str2;

    string mergedString = str1 + str2;
    cout << "\nMerged String : " << mergedString << endl;
    return 0;
}
```

```java
public class mergeStrings {

  public static void main(String[] args) {
    String String1 = "Hello";
    String String2 = "_World";

    System.out.println("String 1 : " + String1);
    System.out.println("String 2 : " + String2);
    String mergedString = String1 + String2;
    System.out.println("\nMerged String : " + mergedString);
  }
}
```

```python
def mergeStrings(String1, String2):
    return String1 + String2


strIn1 = "Hello"
strIn2 = "_World"

print("String 1 : " + strIn1)
print("String 2 : " + strIn2)
print("\nMerged String : " + mergeStrings(strIn1, strIn2))
```

```javascript
const mergeStrings = (Str1, Str2) => {
  let result = Str1.concat(Str2);
  return result;
};

console.log("String 1 : Hello");
console.log("String 2 : _World");
console.log("\nMerged String : ", mergeStrings("Hello", "_World"));
```

</CodeBlock>
