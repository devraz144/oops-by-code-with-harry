// why not structure  , class public and private 

/*

class->    a template to create object 
public->   it can accesible from outside as well as inside the class 
private -> it can be accesible by its class and function 
*/


// making function for the classes 




#include<iostream>
using namespace std ;


class emp {
private:
int a, b ,c;
public :
int e , d ;

void set_data(int x, int y , int z ); // decleartion inside class 
void get_data( void );

};

void emp::set_data( int x , int y , int z){ // defnation outside class 
    a= x;
    b=y ; c=z;
}

void emp::get_data(void){        // defnation outside class
    cout<<" the a is "<<a<<endl;
    cout<<" the b is "<<b<<endl;
    cout<<" the c is "<<c<<endl;
    cout<<" the d is "<<d<<endl;
    cout<<" the e is "<<e<<endl;
}

int main(){

emp e1 ;
e1.set_data(24,52,56);
e1.d=100;
e1.e=200;
e1.get_data();
 
return 0; 
}