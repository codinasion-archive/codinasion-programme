## Write a program to print the reverse of a number

```
Input: 1234
Output: 4321
```

---

<CodeBlock slots="heading, code" repeat="5" languages="Python, C#, C, Java, C++" />

#### Python

```python
# Input
n = int(input('Input : '))

# Reversing the number using string slicing
reversed = int(str(n)[::-1])

# Output
print('Output: ',reversed)
```

#### C#

```cs
using System;
using System.Linq;

public class Reverse
{
    static void Main(string[] args)
    {
        int Reverse(int input)
        {
            return int.Parse(new string(input.ToString()
                .Reverse()
                .ToArray()
            ));
        }

        // Input numbers
        Console.Write("Enter numbers : ");
        int input = int.Parse(Console.ReadLine());


        // output minimum number
        Console.WriteLine("Reversed : " + Reverse(input));
    }
}
```

#### C

```C
#include<stdio.h>
int main(){
    int a,n;
    printf("Input: ");
    scanf("%d",&a);
    printf("Output: ");
    while(a>0){
        n = a%10;
        printf("%d",n);
        a/=10;
    }
    return 0;
}
```

#### Java

```Java
import java.util.Scanner;

public class reverse_of_number {
    public static void main(String[] args) {
        int a,n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        a = sc.nextInt();
        System.out.print("Output: ");
        while(a>0){
            n = a%10;
            System.out.print(n);
            a/=10;
        }
        sc.close();
    }
}

```

#### C++

```C++
#include<iostream>
using namespace std;
int main(){
    int a,n;
    cout<<"Input: ";
    cin>>a;
    cout<<"Output: ";
    while(a>0){
        n = a%10;
        cout<<n;
        a/=10;
    }
    return 0;
}
```
