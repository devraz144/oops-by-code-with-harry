// parmetrized constructor -> a constructor that take argument 
// two type are there to call parametrized  constructor
// implict call ( complex c1(5,6))
// explict call ( complex c1 = complex(5,6))
// both are same 


#include<iostream>
using namespace std ;

class complex {
    int a ;
    int b ;
    public :
    complex( int a , int b ){
        this->a=a;
        this->b=b;
    }
    void display (){
        cout<<" the complex no is "<<a<<" and "<<b<<"i"<<endl;
    }
};

int main(){
  complex c1 = complex(3,44);
  c1.display();
return 0; 
}