// this keyword -> there are some cruical data that can not be said as data1 and data2 
// to call that data as same name we use this->

#include<iostream>
using namespace std ;

class test {
  int age ;
  public :
   test( int age ){   
    this->age=age ;  // here we used this-> keyword 
    cout<<" the value of the age is "<<this->age<<endl;
   }
};

int main(){
 test t1(14) ;

return 0; 
}