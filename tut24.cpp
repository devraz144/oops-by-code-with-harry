// static data memeber & methods

/*
static variable -> is also known as class variable 

*/


#include<iostream>
using namespace std ;

class emp {
    int id ;
    static int count ; // both declearion is must , it says it belongs to class 
    public :
    void setdata(){
        cout<<"enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<" the id of the "<<count<<" emp is"<<id<<endl;
    }
    static void givecount(){
        cout<<" the counter value is "<<count<<endl;
        //cout<<id; -> it will through error bcoz staic fun can only access static data member 
    }
};

int emp::count; // both declearion is must , default value is 0 ;
// int emp::count =1000 ; // if you want to give its vlaue to 1000

int main(){
 
emp dev ;
dev.setdata();
dev.getdata();
emp::givecount();

emp raj ;
raj.setdata();
raj.getdata();
emp::givecount();

return 0; 
}