#include <iostream>

using namespace std;

int main() {

    float Fahrenheit;//initialize Fahrenheit
    float Celsius;//initlialize Celcius

    cout << "Enter the temperature in Celcius: ";
    cin >> Celsius;

    Fahrenheit = ((Celsius * 9.0) / 5.0) + 32;

    cout << "The temperature in Celsius is: " << Celsius << endl;
    cout << "The temperature in Fahrenheit is: " << Fahrenheit << endl;

    

}
