// constants , manipulators & operator 

/*
:: scope resolution opeator -> it will change local scope to global scope like ::a
34.4F = it is float numver 
34.4L= it is along doulbe
sizeof()
*/

/*
referance variable (&)

devraj-> devu-> deva-> dev 


*/

/* type casting -> converating one data type to another 


int a =45 ;
cout<<float(a)<<endl;

*/

/*

const int a = 45;
it is value wont be change 
*/



#include<iostream>
using namespace std ;
int main (){
   float d=32.3;
   long double ado= 32.3;
   cout<<"the value of ado "<<ado<<"\nthe value of d  "<<d<<endl;
   float &y =d; // referance variable  will print 32.3
   cout<<y; 
   
}