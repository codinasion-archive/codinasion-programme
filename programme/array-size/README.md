---
title: Length of an array
description: Write a programme to find the length of an array
image: hero.png
tags:
  - js
  - php
  - python
  - java
  - cs
  - c
  - cpp
  - go
contributors:
  - 0ME9A
  - PrajwalBorkar
  - gauravagrwal
  - KhalilThabet
  - Yilmaz98
---

## Write a programme to find the length of an array

```txt
Input  : [ 1, 2, 3 ]
Output : 3
```

---

<CodeBlock>

```javascript
const arr = ["arguments", "wtho", "count"];

let array_size = arr.length;

console.log("Array size : ", array_size);
```

```php
<?php
$array_list = ['array1', 'array2', 'array3'];

$array_size = sizeof($array_list);

echo "Length of array : $array_size";
?>
```

```python
array_list = ['array1', 'array2', 'array3']

print(array_list)

array_size = len(array_list)

print("\nArray size : ", array_size)
```

```java
import java.util.Arrays;

class ArraySize {

  public static void main(String[] args) {
    String[] arr = { "element1", "element2", "element3" };
    System.out.println("Input  : " + Arrays.toString(arr));

    int arrlength = arr.length;
    System.out.println("Output : " + arrlength);
  }
}
```

```cs
using System;

public class ArraySize
{
    public static void Main()
    {
        int[] num = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        Console.Write("Array : [ ");
        var numCount = 1;
        foreach (var item in num)
        {
            if (numCount == num.Length)
            {
                Console.Write(item.ToString());
            }
            else
            {
                Console.Write(item.ToString() + ", ");
            }

            numCount = numCount + 1;
        }
        Console.Write(" ]\n");
        Console.WriteLine($"Array Size : {num.Length}");
    }
}
```
```c
#include<stdio.h>
int main(){
	int Length  = 0;
	int arr[] = {2,4,6,8,9,4};//6 elements

	printf("Size of int array:%d \n",sizeof(arr));
	printf("Size of 1 int value :%d \n",sizeof(int));

	//Calculate length of the array ( Number of elements)
	Length  = sizeof(arr)/sizeof(int);

	//display array length

	printf("So, array length is:%d",Length );

	return 0;
}
```
```cpp
#include <iostream>
using namespace std;
int main() {
   int arr[5] = {4, 1, 8, 2, 9};
   int len = sizeof(arr)/sizeof(arr[0]);
   cout << "The length of the array is: " << len;
   return 0;
}
```
```go
package main

import "fmt"

func main() {
	array := []string{"element1", "element2", "element3"}

	length := len(array)

	fmt.Println("Array :", array)
	fmt.Println("Array Length :", length)
}
```
</CodeBlock>
