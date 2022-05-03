
Write a programme to compute the volume of the Cylinder

```
radius = 8, height = 10

Volume of a cylinder = 8 * 8 * 10 * π = 2010.62 (round to 2 decimal places)
```

---

<CodeBlock slots="heading, code" repeat="1" languages="Java" />

#### Java

```java
package com.company;

import java.util.Scanner;

public class cylinder {

	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius : ");

        // taking radius input
        int r = sc.nextInt();
        
        System.out.print("\nEnter the height : ");
        
        //taking height input
        int h = sc.nextInt();

        // calculating Volume of cylinder
        double volume = Math.PI * r * r * h;

        // rounding the answer to 2 decimal places
        double answer = (double) Math.round(volume * 100) / 100;

        // printing the final answer
        System.out.println("Volume of cylinder : " + answer);

        sc.close();

	}

}
```
