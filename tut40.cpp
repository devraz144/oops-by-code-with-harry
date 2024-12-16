// multi-level inheritance 
// ( greandfather -> father -> child )
// ( student -> exam -> result ) // this is know as inheritance path 

#include<iostream>
using namespace std ;

class student {
   int rolno ;
   public :
      void setrolno(int a){
        rolno =a  ;
      }
      int getrolno(){
        return rolno ;
      }
};


class exam : public student {
int physics ;
int math ;
public : 
void setmarks ( int a , int b ){
     physics = a;
     math = b;
}
void getmarks (){
     int total = (physics+math)/2;
     cout<<"the average marks is "<<total<<endl;
}

};

class result : public exam {
public :
void show(){
     cout<<"the result of the student is "<<endl;
     cout<<"the enro number of this student is "<<getrolno()<<endl;;
     getmarks();
 }

};

int main(){
    result r1 ;
    r1.setrolno(144);
    r1.setmarks(28,98);
    r1.show();

  return 0 ;
}