// pointer 

/*
what is pointer  ->it is a  data type which store the adreass of other variable

ways to do 
1. int * b = &a ;
2. int * b ;
   b = &a; 

// pointrer to pointer 


*/

#include<iostream>
using namespace std ;
int main(){
 int a = 3 ;
 int *b = &a;
 //& -> addrease of variable 
 // * -> dereference of variable ( value at )
 cout<<"the addrease of a "<<&a; // eg.12, both will be same 
 cout<<"the addrease of a "<<b; // eg.12, both will be same 
 
 cout<<"the value at addrease b is "<<*b<<endl; 

 // poiner to pointer -> a pointer that store the addrease of another pointer 
 int **c =&b;
 cout<<"the addrease of b "<<&b<<endl; // eg . 133 , it is the adreae of b 
 cout<<"the addrease of b is "<<c<<endl; // eg . 133 , it is the adreae of b 
 cout<<"the value at adrease c is "<<*c<<endl;// eg. it is the adrease of a 
 cout<<" the vaue at adrease of adrease of c is "<<**c<<endl;// 3, it is the value of a 
return 0; 

}