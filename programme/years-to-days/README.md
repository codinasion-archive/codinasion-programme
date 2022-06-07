---
title: Years to days
description: Write a programme to convert years to days
image: hero.png
tags:
  - cs
  - python
  - c
  - java
  - cpp
contributors:
  - jojo4441
  - JDev64
  - Badboy-16
  - Anzo52
  - ClasherKasten
---

## Write a programme to convert years to days

```txt
Input : 1
Output : 365
```

---

<CodeBlock>

```cs
using System;

public class YearsToDays
{
    static void Main(string[] args)
    {
        int YearsToDays(int years)
        {
            return years * 365;
        }

        // Input number of years
        Console.Write("Years : ");
        int years = int.Parse(Console.ReadLine());

        // Days output
        Console.WriteLine("Days  : " + YearsToDays(years));
    }
}
```

```python
years = int(input("years : "))
print(f"\ndays  : {years * 365}")
```

```c
#include <stdio.h>

int main()
{
    int years, days;

    printf("Years : ");
    scanf("%d", &years);
    days = years * 365;
    printf("Days  : %d\n", days);
    return 0;
}
```

```java
import java.util.Scanner;

public class YearsToDays {

	public static int yearToDays(int year) {
		return year * 365;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Years : ");
		int years = sc.nextInt();
		System.out.println("Days  : " + yearToDays(years));
		sc.close();
	}

}
```

```cpp
#include <iostream>

int main(void)
{
    double years;
    std::cout << "Years : ";
    std::cin >> years;
    std::cout << "Days  : " << (int)(years * 365) << std::endl;
    return 0;
}
```

</CodeBlock>
