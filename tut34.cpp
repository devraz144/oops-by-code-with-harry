 // copy constructor -> make the copy of another construtor 
 // z1 should exactly look like z 
 // whenever explict object making not work try making implict cal
// if no copy constructor is being mentioned in the code it always have its default copy constructor ready
// if you are copy constructor then ther are two way 1. ( num v1 = z;) 2. ( numv1(z))
// but if you will do 
// num v1 ;
// v1 =z /  then it will be couted as error 

// when makin copy constructor in code then there is reference data type 


/*
IMP
   num ( num &b ){
        a=b.a ;
        cout<<"copy constructor called "<<endl;
     }
};
*/

 #include<iostream>
 using namespace std ;


class num {
 int a; 
 public:
    num( int b){
        a = b;
    }
     void display (){
        cout<<a<<endl;
     }
    num ( num &b ){
        a=b.a ;
        cout<<"copy constructor called "<<endl;
     }
};

 int main(){
    num n1 (20);
    n1.display();
   num  n2(n1);
   
    n2.display();
    num n3 =n2;
    n3.display();

  
 return 0; 
 }