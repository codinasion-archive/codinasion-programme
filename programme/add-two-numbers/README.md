## Write a program to add two numbers

```
Input  : 5 4
Output : 9
```

---

<CodeBlock slots="heading, code" repeat="3" languages="Python, C#, C++" />

#### Python

```python
# input two numbers
x, y = input("Enter two numbers: ").split()

# print sum
print("Sum of numbers : ", int(x)+int(y))
```

#### C#

```cs
using System;
public class AddTwo
{
    static void Main(string[] args)
    {
        int AddTwo(string input)
        {
            var sAr = input.Split(" ");
            return int.Parse(sAr[0]) + int.Parse(sAr[1]);
        }

        // Input numbers
        Console.Write("Enter numbers : ");
        string input = Console.ReadLine();

        // output sum of numbers
        Console.WriteLine("Sum : " + AddTwo(input));
    }
}
```

#### C++

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;

  // input
  cout << "Enter numbers : ";
  cin >> a >> b;

  // calculate
  int sum = a + b;

  // output area
  cout << endl;
  cout << "Sum of numbers: " << sum << endl;

  return 0;
}
```
