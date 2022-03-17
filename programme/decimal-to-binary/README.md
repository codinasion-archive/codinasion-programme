## Write a program to convert decimal number to binary.

```
Input: 8
Output: 1000
```

---

<CodeBlock slots="heading, code" repeat="4" languages="Java, C++, Python, C" />

#### Java

```Java
import java.util.Scanner;

public class decimal_to_binary{
    public static void convert(int a){
        int k = 0;
        String s = "";
        while(a>0){
            k = (a%2);
            s = s+k;
            a=a/2;
        }
        for(int i = s.length()-1 ; i>=0; i--){
            System.out.print(s.charAt(i));
        }
    } 
    public static void main(String[] args) {
        int a = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Input: ");
        a = sc.nextInt();
        System.out.print("Output: ");
        convert(a);
        sc.close();
    }
}
```

#### C++

```C++
#include<iostream>
#include<string>
using namespace std;
void convert(int a){
    int k =0;
    string s = "";
    while(a>0){
        k = (a%2);
        s.append(to_string(k));
        a=a/2;
    }
    for(int i = s.length()-1 ; i>=0 ; i--){
        cout<<s.at(i);
    }
}
int main(){
    int a;
    cout<<"Input: ";
    cin>>a;
    cout<<"Output: ";
    convert(a);
    return 0;
}
```

#### Python

```Python
def convert(a):
    l = []
    k = 0
    while a>0:
        k = a%2
        l.append(str(k))
        a=a//2
    print("".join(l[::-1]))


a = int(input("Input: "))
convert(a)
```

#### C

```C
#include<stdio.h>
#include<string.h>
void convert(int a){
    int k =0;
    char* ch = "0";
    char binary[100];
    while(a>0){
        k = a%2;
        if(k==1){
            ch="1";
        }
        else{
            ch="0";
        }
        strcat(binary,ch);
        a=a/2;
    }
    printf("Output: %s\n",strrev(binary));
}
int main(){
    int a;
    printf("Input: ");
    scanf("%d",&a);
    convert(a);
    return 0;
}
```
