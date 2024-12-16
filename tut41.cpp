// mutiple inheritance -> ( one child and two papa )


/*
-> syntax 

class base1;
class base2;

class derived1 : public base1 , public base2 {};

*/


#include<iostream>
using namespace std ;

class base1{
   protected:
    int base1var ;
    public:
       void setdata1(int a){
        base1var = a;
       }

};

class base2{
   protected:
    int base2var ;
    public:
       void setdata2(int a){
        base2var = a;
       }

};

class base3{
   protected:
    int base3var ;
    public:
       void setdata3(int a){
        base3var = a;
       }

};

class derived : public base1 , public base2 , public base3{
    public:
    void show (){
        cout<<" the value of base 1 is "<<base1var<<endl;
        cout<<" the value of base 2 is "<<base2var<<endl;
        cout<<" the value of base 3 is "<<base3var<<endl;
        cout<<" the sum of total is    "<<base1var+base2var+base3var<<endl;
    }

};

int main(){
    derived d1 ;
    d1.setdata1(132);
    d1.setdata2(232);
    d1.setdata3(233);
    d1.show();
 
return 0; 
}