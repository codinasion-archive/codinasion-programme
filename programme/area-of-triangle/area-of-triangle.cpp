#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter a: ";
    cin>>a;
    
    cout<<"Enter b: ";
    cin>>b;
    
    cout<<"Enter c: ";
    cin>>c;

    float s=(float)(a+b+c)/2;

    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    
    cout<<"s: "<<s;
    cout<<endl<<"Area: "<<area; //printing the area

    return 0;

}
