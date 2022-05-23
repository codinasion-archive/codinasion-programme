---

Title: Digital Root
Description: Write a programme to compute Digital Root of number. It will sum of digit in given number until it become single digit.

tags:

- Python
- C++
- C

contributors:

- arth2002

---

## Write a programme to compute Digital Root of number

```txt

345 => 3+4+5=> 12 => 1+3=>4
45 => 4 + 5 => 9

```
---

  

<CodeBlock>

  
**Python**
```
def digital_root(n):
    if n==0:
        return 0
    else:
        return 1 + ((n-1)%9)
n = int(input("Enter Number: "))
print("Digital Root :",digital_root(n))

```
**C++**
```
#include <iostream>
using namespace std;
int digital_root(int n){
    if (n==0)return 0;
    else{
        return 1 + ((n-1)%9);
    }
}
int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout <<endl;
    cout << "Digital Root Value :"  << digital_root(n);
    return 0;
}

```
**C**
```
#include <stdio.h>
int digital_root(int n){
    if (n==0)return 0;
    else{
        return 1 + ((n-1)%9);
    }
}
int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    int ans = digital_root(n);
    printf("\n");
    printf("Digital Root Value : %d",ans);
    printf("\n");
    return 0;
}
```

</CodeBlock>