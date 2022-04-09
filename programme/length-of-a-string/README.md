## Write a program to print the length of a string

```
Input: abcd
Output: 4
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Python"/>

#### Python

```python
# Taking input of the string
n = input("Input Enter a text : ")

# Printing the length of the string
print(f"\nLength of the string is {len(n)}")
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
    cout << "Length of string is : " << str.size();

    return 0;
}
```
