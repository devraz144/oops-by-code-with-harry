// array of object ;


#include<iostream>
using namespace std ;

class emp {
  int id ; 
  int salary ;
  public:
   void setdata(void){
    salary=122;
     cout<<"enter the emmp id "<<endl;
     cin>>id;
   }

   void getdata(void){
    cout<<"the salary of the emp is "<<salary<<endl;
    cout<<"the id of the emp is "<<id<<endl;
    cout<<endl;
   }
   void setsalrybysum( emp dev ,emp raj){
    salary = dev.salary+raj.salary;
     getdata();
   }

};


int main(){
     emp e[2];
     for(int i =0; i<2;i++){
        e[i].setdata();
        e[i].getdata();
       
     }
     
     emp dev;
     dev.setdata();
     dev.setsalrybysum(e[0],e[1]);

return 0; 
}