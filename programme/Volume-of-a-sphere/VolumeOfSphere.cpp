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
