// virtual function 

#include<iostream>
using namespace std ;

class base {

public :
 int var1 ;
 virtual void  display ( ){  // here we use virtual function it basically change the behaviour of your function 
    cout<<" the value of base class's var 1 is "<<var1<<endl;
 }

};

class derived : public base {

public:
int var2 =1000;
void display(){
    cout<<" the value of derived class's var2 is "<<var2<<endl;
}

};


int main(){
 
base * base_class_ptr ;
derived d1 ;

base_class_ptr = &d1;
base_class_ptr->var1 = 34 ;
base_class_ptr->display();


return 0; 
}

