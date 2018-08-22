#include <iostream>
using namespace std;
 
int main()

   {
    //declaring variables
    float angle1 , angle2 , angle3 ;
    cout << "Find angle3 of a triangle :";

    //input angle1	
    cout<<" Input angle1 of the triangle : ";
    cin>>angle1 ; 
    
    //input angle2
    cout<<" Input angle2 of the triangle : ";
    cin>>angle2 ;
    
    //value of angle3
    angle3 =180-(angle2 +angle1 ); 

    //show output in terminal
    cout << " The angle3 of the triangle is : " << angle3 << endl;
    cout << endl;

    return 0;
    }	
