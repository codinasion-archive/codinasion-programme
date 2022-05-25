---
title: Digital Root
description: Write a programme for Digital Root of a number
tags:
  - c
  - cpp
  - python
  - js
contributors:
  - arth2002
  - ferruhcihan
---

## Write a programme for Digital Root of a number

`Digital Root` is the single number obtained by adding the number successively.

```txt
347 = 3 + 4 + 7 = 14
14 = 1 + 4 = 5
```

Thus, 5 is a single digit number, which is the digital root/ seed number of 347.

```txt
Input  : 347
Output : 5
```

---

<CodeBlock>

```c
#include <stdio.h>

int digital_root(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return 1 + ((n - 1) % 9);
    }
}

int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);
    int ans = digital_root(n);
    printf("\n");
    printf("Digital Root Value : %d\n", ans);
    return 0;
}
```

```cpp
#include <iostream>
using namespace std;

int digital_root(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return 1 + ((n - 1) % 9);
    }
}

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    cout << endl;
    cout << "Digital Root Value : " << digital_root(n) << endl;
    return 0;
}
```

```python
def digital_root(n):
    if n == 0:
        return 0
    else:
        return 1 + ((n-1) % 9)


n = int(input("Enter Number : "))
print("Digital Root :", digital_root(n))
```

```js
function digital_root(n) {
  if (n === 0) {
    return 0;
  } else {
    return 1 + ((n - 1) % 9);
  }
}

let num = prompt("Enter Number : ");
console.log("Digital Root :", digital_root(num));
```

</CodeBlock>
