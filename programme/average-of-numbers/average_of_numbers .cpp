// Write a programmeto find average of numbers
#include <iostream>

using namespace std;

int main()
{
    int N, num;
    cout << "Numbers count : ";
    cin >> N;
    cout << "\nEnter " << N << " Numbers" << endl;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        cout << "Enter : ";
        cin >> num;
        sum += num;
    }
    cout << "\nAverage is " << (sum * 1.0) / N << endl;
    ;
}
