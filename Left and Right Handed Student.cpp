// Find Left and Right handed students in the class. 

#include <iostream>
#include <string>
using namespace std;
int main()
{
char leftOrRight ; // L or R for one student.
int rightTotal = 0,n;   // Number of right-handed students.
int leftTotal = 0;    // Number of left-handed students.
cout<<"Enter the number of Students in Class: "<<endl;
cin>> n;
cout<<"Enter an L if you are left-handed, a R if you are right-handed or X to quit: "<<endl;
while(leftOrRight!='X')
{
   cin >> leftOrRight;
   if(leftOrRight=='R')
      rightTotal++;
   else if(leftOrRight=='L')
       leftTotal++;
}
cout<<"Total Students: "<<n<<endl;
cout<<"Number of Left Handed Students in Class: "<<leftTotal<<endl;
cout<<"Number of Right Handed Students in Class: "<<rightTotal<<endl;
   return(0);
}
