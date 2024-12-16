// constructor in derived class 


/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

/*
IMP -> if there is constructor in base class class then derived class constuctor need to be made and pass the argument from ther
*/


// the following code will give error 
// it will be fix by writing 
/*
derived ( int a , int b ,int c , int d ): base1(a), base2(b){
    var3=c ;
    var4=c;
}
*/

#include<iostream>
using namespace std ;

class base1 {
   int var1 ;
   public : 
    base1( int a ){
    var1 = a;
    cout<<" the constructot of base 1 class "<<endl;
   }
   void getdata(){
    cout<<" the value of var 1 is "<<var1<<endl;
   }

};

class base2 {
   int var2 ;
   public : 
    base2( int b){
    var2 = b;
    cout<<" the constructor of base 2 class"<<endl;
   }

   void getdata(){
    cout<<" the value of var 2 is "<<var2<<endl;
   }

};

class derived : public base2 , public base1 {
    int var3 ;
    int var4 ;
   public:
  
  // this will give error and i have told how to fix this above 
   derived ( int a , int b ) 
  {  var3 = a; 
     var4 = b;
     cout<<" the constructuor of derived class called "<<endl;
   }


   void show(){
    cout<<endl;
    cout<<endl;
    cout<<endl;
    base1::getdata();
    base2:: getdata();
    cout<<" the var 3 and 4 is "<<var3<<var4<<endl;

   }
};

int main(){
    derived d1(1,2);
    d1.show();
 
return 0; 
} 
