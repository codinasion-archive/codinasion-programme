#include <iostream>
using namespace std;

double Divide(int num1, int num2)
{
    if(num2==0)
    {
        return -1;
    }
    double result = (double)num1/(double)num2;
    return result;
}

int main() {
    int num1, num2;
    cin>>num1>>num2;
    int result = Divide(num1,num2);
    if(result==-1)
    {
        cout<<"Divide by Zero is not possible";
    }
    else
    {
        cout<<result;
    }

    return 0;
}