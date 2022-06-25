---
title: Slice array element 
description: Write a programme to generate new array with sliced elements of old array
image: hero.png
tags:
  - js
  - php
  - python
contributors:
  - 0ME9A
---

## Write a programme to generate new array with sliced elements of old array

```txt
Array : ['abcd', 'efgh', 'ijklmn', 'opq', 'rstuvw', 'xyz']
Start : 2
End   : 3

Sliced Array : ['bc', 'fg', 'jk', 'pq', 'st', 'yz']
```

---

<CodeBlock>

```javascript
// define array
array_list = ["abcd", "efgh", "ijklmn", "opq", "rstuvw", "xyz"];
console.log("Array :", array_list);

// function arguments (arrayList) (start slice from -number) (end slice with -number)
function arrayLetterRange(a_list, start = 0, end = 2) {
  // store slice value in result
  let result = [];
  for (let i = 0; i < a_list.length; i++) {
    const element = a_list[i];
    let sliced_val = element.slice(start - 1, end);

    // check slice value if not empty
    if (sliced_val != "") {
      result.push(sliced_val);
    }
  }
  return result;
}

// define range
let start = 2;
let end = 3;
console.log("Start :", start);
console.log("End   :", end);

// call the function
let array_result = arrayLetterRange(array_list, start, end);

console.log("\nSliced Array :", array_result);
```

```php
<?php
// define array
$array_list = ['abcd', 'efgh', 'ijklmn', 'opq', 'rstuvw', 'xyz'];
print 'Array : ' . json_encode($array_list);

# function arguments (arrayList) (start slice from -number) (end slice with -number)
function arrayLetterRange($a_list, $start = 1, $end = 2)
{
    // store slice value in result
    $result = [];
    for ($i = 0; $i < sizeof($a_list); $i++) {
        $sliced_val = substr($a_list[$i], $start - 1, $end);

        // check slice value if not empty
        if ($sliced_val != '') {
            array_push($result, $sliced_val);
        }
    }
    return $result;
}

// define range
$start = 2;
$end = 3;
print "\nStart : $start";
print "\nEnd   : $end";

// call the function
$array_result = arrayLetterRange($array_list, $start, $end);
print "\n\nSliced Array : " . json_encode($array_result);
print "\n";
?>
```

```python
# define array
array_list = ['abcd', 'efgh', 'ijklmn', 'opq', 'rstuvw', 'xyz']
print("Array :", array_list)

# function arguments (arrayList) (start slice from -number) (end slice with -number)
def arrayLetterRange(a_list, start=5, end=1):

    # store slice value in result
    result = []
    for i in a_list:
        sliced_val = i[start-1: end]

        # check slice value if not empty
        if i != '':
            result.append(sliced_val)

    return result

# define range
range_start = 2
range_end = 3
print("Start :", range_start)
print("End   :", range_end)
print()

# call the function
array_result = arrayLetterRange(array_list, range_start, range_end)
print("Sliced Array :", array_result)
```

</CodeBlock>
