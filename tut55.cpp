// base class pointer to derived class 


#include<iostream>
using namespace std ;

class base {

public :
 int var1 ;
 void display ( ){
    cout<<" the value of base class's var 1 is "<<var1<<endl;
 }

};

class derived : public base {

public:
int var2;
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
