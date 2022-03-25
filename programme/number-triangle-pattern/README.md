## Write a program to print number triangle pattern.

```
Input: 5
Output: 
    1
   121
  12321
 1234321
123454321
```

---

<CodeBlock slots="heading, code" repeat="4" languages="C, C++, Python, Java" />

#### C

```c
#include <stdio.h>

void pattern(int a)
{
    printf("Output :\n");
    for (int i = 1; i <= a; i++)
    {
        int c = 1;
        for (int k = a; k > i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j < i)
            {
                printf("%d", c);
                c++;
            }
            else
            {
                printf("%d", c);
                c--;
            }
        }
        printf("\n");
    }
}
int main()
{
    int a;
    printf("Input  : ");
    scanf("%d", &a);
    pattern(a);
    return 0;
}
```

#### C++

```C++
#include<iostream>
using namespace std;
void pattern(int a){
    cout<<"Output:\n";
    for(int i= 1; i<=a ; i++){
        int c = 1;
        for(int k = a ; k>i ; k--){
            cout<<" ";
        }
        for(int j = 1; j<=2*i-1; j++){
            if(j<i){
                cout<<c;
                c++;
            }
            else{
                cout<<c;
                c--;
            }

        }
        cout<<"\n";
    }
}
int main(){
    int a;
    cout<<"Input: ";
    cin>>a;
    pattern(a);
    return 0;
}
```

#### Python

```python
def pattern(a):
    print("Output:")
    for i in range(1,a+1):
        c = 1
        for k in range(a,i,-1):
            print(" ",end="")
        for j in range(1,2*i):
            if j<i:
                print(c,end="")
                c+=1
            else:
                print(c,end="")
                c-=1
        print()

a = int(input("Input: "))
pattern(a)
```

#### Java

```java
import java.util.Scanner;

public class number_triangle_pattern{
    private static void pattern(int a) {
        System.out.print("Output:\n");
        for(int i= 1; i<=a ; i++){
            int c = 1;
            for(int k = a ; k>i ; k--){
                System.out.print(" ");
            }
            for(int j = 1; j<=2*i-1; j++){
                if(j<i){
                    System.out.print(c);
                    c++;
                }
                else{
                    System.out.print(c);
                    c--;
                }

            }
            System.out.print("\n");
        }        
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        int a = sc.nextInt();
        pattern(a);
        sc.close();
    }

}
```
