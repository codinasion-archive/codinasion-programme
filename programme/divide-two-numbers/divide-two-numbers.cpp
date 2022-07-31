// Write a programmeto divide two numbers
#include <iostream>

using namespace std;

double Divide(int num1, int num2)
{
    if (num2 == 0)
    {
        return -1;
    }
    double result = (double)num1 / (double)num2;
    return result;
}

int main()
{
    int num1, num2;
    cout << "Input the Dividend : ";
    cin >> num1;
    cout << "Input the Divisor  : ";
    cin >> num2;
    double result = Divide(num1, num2);
    if (result == -1)
    {
        cout << "\n!!!  Divide by Zero is not possible  !!!\n";
    }
    else
    {
        cout << "\nOutput : " << result << endl;
    }

    return 0;
}
