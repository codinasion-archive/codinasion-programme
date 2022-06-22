---
title: Sum of Cubes
description: Write a programme to find sum of cubes of first n natural numbers
image: hero.png
tags:
  - python
  - java
  - c
  - cpp
  - js
  - cs
contributors:
  - johnelbacani
  - NeelPatel31
  - victoriacheng15
  - umaxyon
---

## Write a programme to find sum of cubes of first n natural numbers.

```txt
Input  : 4
Output : 100
```

---

<CodeBlock>

```python
#Input
n = int(input('Input : '))

#Reversing the number using string slicing
sumofcubes = sum([x*x*x for x in [*range(1, n+1)]])

#Output
print('Output: ', sumofcubes)
```

```java
import java.util.*;
public class solution
{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        int n = sc.nextInt();
        int total = 0;
        for(int i=1;i<=n;i++){
            total += (i*i*i);
        }
        System.out.println("Output: "+total);
        sc.close();
    }
}
```

```c
#include <stdio.h>

int main()
{
    int a;
    int total = 0;
    printf("Input : ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        total += (i * i * i);
    }
    printf("Output : %d\n", total);
    return 0;
}
```

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a, total = 0;
    cout << "Input : ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        total += (i * i * i);
    }
    cout << "Output : " << total << endl;
    return 0;
}
```

```javascript
function sumOfCube(num) {
  const numsArr = [...new Array(num + 1).keys()].slice(1);
  return numsArr.reduce((acc, curr) => acc + curr ** 3, 0);
}

const num = 3;
console.log(`The sum of cube for ${num} : ${sumOfCube(num)}`);
```

```cs
using System;
using System.Linq;

public class SumOfCube
{
    public static void Main(string[] args)
    {
        Console.Write("Input  : ");
        int num;
        if (int.TryParse(Console.ReadLine(), out num))
        {
            double total =
                Enumerable
                    .Range(1, Math.Abs(num))
                    .Aggregate(0, (a, b) => a + (int) Math.Pow(b, 3));

            Console.WriteLine($"Output : {total}");
        }
        else
        {
            Console.WriteLine("Input Err");
        }
    }
}
```

```go
package main

import (
	"fmt"
	"strconv"
)

func main() {
	var str string

	fmt.Print("Input : ")
	fmt.Scan(&str)

	num, err := strconv.Atoi(str)
	if err != nil {
		fmt.Printf("Input error: %s", str)
		return
	}

	var total int
	for i := 1; i <= num; i++ {
		total += i * i * i
	}
	fmt.Printf("Output : %d\n", total)
}
```

</CodeBlock>
