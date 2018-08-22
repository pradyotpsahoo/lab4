#include<iostream>

using namespace std;

int main()

    {
    //declaring variables
    float km, met,cent;

    //input length in centimeter
    cout << "\n\n Convert centimeter into meter and kilometer :\n";
    cout << " Input the distance in centimeter : ";
    cin >> cent;

    //convert centimeter to meter and kilometer
    met = (cent/100); 
    km = (cent/100000);

    //show output in terminal
    cout << " The distance in meter is: "<< met << endl;
    cout << " The distance in kilometer is: "<< km << endl;	
    cout << endl;


    return 0;
    }  
