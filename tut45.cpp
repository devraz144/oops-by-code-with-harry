// virtual base class 


#include<iostream>
using namespace std;

class student {
   protected:
   int roll_no ;
   public: 
   void setroll( int d ){
    roll_no =d ;
   }
   void getroll( ){
    cout<<" the roll_No is "<<roll_no<<endl;
   }

};

class test : virtual  student {
  protected:
  int math ;
  int physics ;
  public:
  void setmarks( int i , int j ){
    math = i ;
    physics = j ;

  }
  void getmarks( ){
    cout<<" the sum of the two subject "<<math+physics<<endl;
  }

};

class sports :virtual public student {
   protected :
   int sprotmark ;
   public:
   void setsportmarks(int a){
    sprotmark=a;
   }
   void getsportmarks(){
    cout<<" the marks total in sport  "<<sprotmark<<endl;
   }


};
class derived : public sports , public test {
   public :
   void show (){
    getroll();
    getmarks();
    getsportmarks();
    cout<<" the average mark is "<<float((math+physics+sprotmark)/3)<<endl;
   }

};

int main (){
   derived d1 ;
   d1.setroll(144);
   d1.setmarks(23,34);
   d1.setsportmarks(34);
   d1.show();
   return 0 ;
}