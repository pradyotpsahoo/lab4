#include<iostream>
 
using namespace std;
 
int main()
    {   
    //declaring variables
    int years,weeks,days;
    
    //input the no of days
    cout<<"Enter No. of days:";
    cin>>days;

    //convert days into years,weeks and days
    years=days/365;
    weeks=days/7;
    days=days%7;

    //show output in terminal
    cout<<"Years: "<<years<<endl;
    cout<<"Weeks: "<<weeks<<endl;
    cout<<"Days: "<<days<<endl; 

    return 0;
    }

