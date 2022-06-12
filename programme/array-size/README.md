---
title: Length of an array
description: Write a programme to find the length of an array
image: hero.png
tags:
  - js
  - php
  - python
  - cs
contributors:
  - 0ME9A
  - gauravagrwal
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

```cs
using System;

public class ArraySize
{
	public static void Main()
	{
		int[] num = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		Console.WriteLine($"Array Size: {num.Length}");

		string[] str = {"The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"};
		Console.WriteLine("Array Size: " + str.Length);
	}
}
```

</CodeBlock>
