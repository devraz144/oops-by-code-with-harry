// inheritance syntax and visablilty mode 

/*
ihertiance syntax ->

--> class base1 ;
    class derived1 : visability_mode  base1 ;

*/

/*
-> visablilty mode 
-> public -> public memeber of base class are also public in derived class 
-> privat -> public member of base class become private member of derived class 
-> protected -> public and protected member become protected member in base class


IMP -> private mem of base class never inherit 
*/


// code 

#include<iostream>
using namespace std ;

class emp {    // base class
     int id ;
     float salary ;
     public :
      void setdata( int a , float b ){
            id =a ;
            salary =b ;
      }
      float salary1 (){
        return salary;
      }
};

class bonus : public emp  {  // derived classs and syntax 
   float bonus ;
   public:
      void calbonus (){
        bonus = salary1();  // we can't get the salary directly bcoz its the private member of tha base class that by we have made -> void salary() , iheritance took place 
        bonus= bonus* 0.1;
        
      }
      void totalsal();

};
void bonus:: totalsal(){
    float sal ;
    sal = salary1()+bonus ;
    cout<<"the salary of the empolyee is "<<sal<<endl; 
    cout<<" thanku ";
}

int main(){
    bonus parth ;
    parth.setdata(1, 100); // by inheritance we set the value of id and slary by making the base class object 
    parth.calbonus();
    parth.totalsal();
 
return 0; 
}