#include <iostream>
using namespace std;

int main()
{
    int number;
    cin>>number;
    int factorial_of_number = 1;
    for(int i=1;i<=number;i++)
    {
        factorial_of_number = factorial_of_number*i;
    }
    cout<<"Factorial of "<<number<<" is "<<factorial_of_number;
    return 0;
}
