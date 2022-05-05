## Write a programme to convert hours to seconds

```
Hrs : 1
Sec : 3600
```

---

<CodeBlock slots="heading, code" repeat="4" languages="Python, C, C++, Java" />

#### Python

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

#### C

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

#### C++

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

### Java

```Java
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
