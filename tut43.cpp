// solving ambiguity / function overrading 
// -> when the two base class has same function name with same argumint then how to resolve 

/* SYNTAX 

class base1{
 void show();
};

class base2{
 void show();
};

class derived : public base1 , public base2 {
    void show (){
       base1::show() // here ambiguty got resolve  THIS IS THE SYNTAX . IT WILL SAY THAT SHOW OF BASE IS TO BE CALL
    
    }
}

*/


/* IMP
-> if derived class has its own function with same name then derived function is going to be called 
-> whatever you write in the derived function will be called ;

*/

#include<iostream>
using namespace std ;

class base1{
  public:
 void show(){
    cout<<" this is the show of base 1"<<endl;
 }
};

class base2{
    public:
 void show(){
     cout<<" this is the show of base 2"<<endl;
 }
};

class derived : public base1 , public base2 {
    public:
    void show (){
       base1::show();// here ambiguty got resolve  THIS IS THE SYNTAX . IT WILL SAY THAT SHOW OF BASE IS TO BE CALL
       base2::show(); // both run succesfully and give the right output 
    }
};

int main(){

    derived d1 ;
    d1.show();
 
return 0; 
}