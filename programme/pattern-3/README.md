---
title: Print Pattern 3
description: Write a programme to print the given pattern
image: hero.png
tags:
  - python
  - c
  - js
contributors:
  - seraph776
  - ClasherKasten
---

## Write a python programme to print the given pattern

```txt
Input  : 5
Output :

x x x x x
x       x
x       x
x       x
x x x x x

```

<CodeBlock>

```python
def print_pattern(n: int) -> None:
    print("Output : \n")
    for col in range(n):
        for row in range(n):
            if col == 0 or col == n - 1 or row == 0 or row == n - 1:
                print(' * ', end='')
            else:
                print('   ', end='')
        print()


n = int(input("input  : "))
print_pattern(n)
```

```c
#include <stdio.h>

#define BOUNDARY_STR ("x")

void pattern(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("%s ", BOUNDARY_STR);
    }
    printf("%s\n", BOUNDARY_STR);
    for (int i = 0; i < n - 2; i++)
    {
        printf(BOUNDARY_STR);
        for (int i = 0; i < n - 2; i++)
        {
            printf("  ");
        }
        printf(" %s\n", BOUNDARY_STR);
    }
    if (n != 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            printf("%s ", BOUNDARY_STR);
        }
        printf("%s\n", BOUNDARY_STR);
    }
}

int main(void)
{
    int n;
    printf("Input : ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}
```

```js
"use strict";

const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

function pattern(n) {
	for (let i = 0; i < n - 1; i++)
    {
		rl.write('x ');
    }
	rl.write('x\n');
    for (let i = 0; i < n - 2; i++)
    {
		rl.write('x')
        for (let i = 0; i < n - 2; i++)
        {
			rl.write('  ');
        }
        rl.write(' x\n');
    }
    if (n != 1)
    {
        for (let i = 0; i < n - 1; i++)
        {
            rl.write('x ');
        }
        rl.write('x\n');
    }
}

rl.question('Input  : ', n => {
	console.log('Output :\n');
	n = parseInt(n);
	if (isNaN(n)) {
		console.error('Some error occured');
	} else {
		pattern(n);
	}
	rl.close();
});
```

</CodeBlock>
