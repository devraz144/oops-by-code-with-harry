// sinlge inheritance deep dive 


#include<iostream>
using namespace std ;
class base1 {
  int data1 ; 
  public :
   int data2 ;
   void setdata( int a, int b );
   int getdata1();
  // int getdata2();
};

void base1:: setdata(int a , int b ){
    data1=a ;
    data2 =b ;
}

int base1:: getdata1(){
    return data1;
}


class derived1 : public base1{ // single inheritance has done here by public visablity mode 
 int data3 ;
 public:
      void process(){
     data3 = data2*getdata1();}

     void display(){
          process();
          cout<<" the value of data 1 is "<<getdata1()<<endl;
          cout<<" the value of data 1 is "<<data2<<endl;
          cout<<" the value of data 1 is "<<data3<<endl;
     }

};


int main(){
      
      derived1 d1 ;
      d1.setdata(10,12);
      d1.display();


    return 0 ;
}