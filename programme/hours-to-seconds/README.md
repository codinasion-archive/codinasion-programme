---
title: Hours to Seconds
description: Write a programme to convert hours to seconds
tags:
  - python
  - c
  - cpp
  - java
  - go
  - js
contributors:
  - GodKimba
  - williamye51
  - HaveACookie
  - rossilor95
  - Micha-L-Davis
---

## Write a programme to convert hours to seconds

```txt
Hrs : 1
Sec : 3600
```

---

<CodeBlock>

```python
# Input the hours from the user
hours = int(input("How many hours do you want to convert into seconds: "))

# Convert the number in hours to seconds (convert the variable to integer because input gets input as string by default)
seconds = int(hours) * 3600

# Print the result
# If function just to correct the grammar. If it is less than 1 hour, keep it singular, else turn into plural.
if hours <= 1:
    # Using f string to insert the variables
    print(f"{hours} hour is equal to {seconds} seconds!")
else:
    print(f"{hours} hours is equal to {seconds} seconds!")
```

```c
#include <stdio.h>

int main()
{
  double input;
  printf("Hours   : ");
  scanf("%lf", &input);
  int seconds = input * 3600;

  printf("Seconds : %d\n", seconds);
  return 0;
}
```

```cpp
#include <iostream>
using namespace std;

int main()
{
  double input;
  cout << "Hours   : ";
  cin >> input;
  double seconds = input * 3600;

  cout << "Seconds : " << seconds << endl;
  return 0;
}
```

```java
import java.util.Scanner;

class hoursToSeconds {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Hours   : ");
        int s = Integer.parseInt(sc.nextLine());

        s = s * 60 * 60;
        System.out.println("Seconds : " + s);

        sc.close();
    }
}
```

```go
package main

import "fmt"

func main() {
	fmt.Print("Insert the (integer) number of hours you want to convert into seconds: ")
	var hours int
	fmt.Scan(&hours)
	var seconds int = hours * 3600
	fmt.Println("Hrs :", hours)
	fmt.Println("Sec :", seconds)
}
```

```javascript
"use strict";

let hoursInput = prompt("Hours : ");

console.log("Seconds :", hoursToSeconds(+hoursInput));

function hoursToSeconds(hours) {
  return hours * 3600;
}
```

</CodeBlock>
