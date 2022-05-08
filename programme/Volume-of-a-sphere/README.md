## Write a program to print volume of Sphere

```
Input : Radius : 8

Output : 2144.66 (round to 2 decimals)

```
<CodeBlock slots="heading, code" repeat="2" languages="Java, C++" />

#### Java

```java
import java.util.Scanner;

public class VolumeOfSphere {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);  // importing Scanner class to take user Input 

        System.out.print("Radius : ");

        int radius = sc.nextInt(); // we are taking radius as Integer.

        double pi = Math.PI;

        double volumeSphere = (4.0 / 3) * pi * (radius * radius * radius);  // formula of Volume of Sphere
        
        System.out.format("Volume : %.2f", volumeSphere);

    }
}
```
#### C++

```cpp

#include<iostream>
using namespace std;

int main(){
    int radius;

    cout<<"Radius : ";
    cin>>radius;

    float volumeSphere = (4.0 / 3) * 3.14 * (radius * radius * radius);

    cout<<"Volume : "<<volumeSphere<<endl;

    return 0;
}
```