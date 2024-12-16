// initiallization list in constructor in cpp 


/*
-> syntax for : instillization list 

construcor ( argument ) : intillization section {
assignment and more 
}
*/

#include<iostream>
using namespace std ;

class test {
    int a;
    int b ;
    public :
    test ( int x , int y ): b(x), a(y){ // it is the instillization list 
        cout<<"all good ";
        cout<<a<<b;
    }
};


int main(){
    test t1(2,3);
 
return 0; 
}

// Test(int i, int j) : a(i), b(a + j) -> this will work as a is decleared then b is decleard 
// Test(int i, int j) : b(j), a(i+b)  ->


