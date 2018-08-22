//library
#include<iostream>
#include<cmath>

using namespace std;

int main()
     {
      //declaring variables
      float s;
      float area;
      cout << " Calculate the area of the Equilateral Triangle :"<<endl;
		 
      //input side
      cout<<" Input the value of the side of the equilateral triangle: ";
      cin>>s;
      
      //calculate area
      area = sqrt(3)/4*(s *s);
      
      //show output in terminals
      cout<<" The area of equilateral triangle is: "<<area<<endl;
      cout << endl;
      return 0;
      }
