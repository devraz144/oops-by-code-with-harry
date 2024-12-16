// constructor with default argument 

#include<iostream>
using namespace std ;

class dta {
    int val1;
    int val2 ;
    public:
     dta ( int v , int v1=4){
        val1=v ;
        val2=v1;
     }
     void printdata(){
        cout<<val1<<val2<<endl;
     }
};

int main(){
    dta c1 = dta(2,0);
    dta c2 = dta(3);

    c1.printdata();
    c2.printdata();
 
return 0; 
} 