#include<iostream>

using namespace std;
 
int main()

    {
    //declaring variables
    float fahrenheit, celsius;

    //input temp in celsius 
    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;

    //convert celcius to fahrenheit
    fahrenheit = (celsius * 9.0) / 5.0 + 32;

    //show output in terminal
    cout << "The temperature in Celsius    : " << celsius << endl;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;

    return 0;

   }
