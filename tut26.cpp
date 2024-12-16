// friend function 

#include<iostream>
using namespace std ;


class complex{
int a , b;
public :
  void setnumber(int n1, int n2 ){
    a=n1;
    b=n2;
  }
  void print(){
     cout<<a<<"+"<<b<<"i"<<endl;
  }

  friend complex makecomplex( complex c1 , complex c2);
  friend void dispaly();

};

complex makecomplex(complex c1 , complex c2){
    complex ans ;
    ans.setnumber((c1.a+c2.a), (c1.b+c2.b));
    return ans;
}
void display(){
  cout<<" all work the way good ";
}

int main(){
    complex c1,c2;
    c1.setnumber(1,7);
    c2.setnumber(3,9);
    c1.print();
    c2.print();
    complex sum;
    sum =makecomplex(c1,c2);
    sum.print();
    display();
    
 
return 0; 
}