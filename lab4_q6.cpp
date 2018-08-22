#include<iostream>

using namespace std;
 
int main()

        {       
        //declaring variables
        float height, base ,area;
        cout<<"Find area of a triangle:"<<endl;
        
        //input height
        cout<<"Input height of the triangle:";
        cin>>height;
        
        //input base
        cout<<"Input base of the triangle:";
        cin>>base;
      
        //value of area
        area= (height*base) / 2;
        cout<<"area of triangle is :"<<area<<endl;

        return 0;
        }
