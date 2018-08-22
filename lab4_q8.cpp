#include<iostream>

using namespace std;
 
int main()

   {
    //declaring variables
    float a , b , c , d , e ,total,avg,percentage;
    //marks obtained
    cout<<"marks obtained in physics:";
    cin>>a;
    cout<<"marks obtained in biology:";
    cin>>b;
    cout<<"marks obtained in chem:";
    cin>>c;
    cout<<"marks obtained in math:";
    cin>>d;
    cout<<"marks obtained in cs:";
    cin>>e;

    //total avg and percentage 
    total = a+b+c+d+e;
    avg = (a+b+c+d+e)/5;
    percentage= (a+b+c+d+e)/500*100;
    
    //show output in terminals
    cout<< "total marks is:"<<total<<endl;
    cout<< "avg marks is:"<<avg<<endl;
    cout<< "percentage is:"<<percentage<<"%"<<endl;
    
    return 0;
    }
