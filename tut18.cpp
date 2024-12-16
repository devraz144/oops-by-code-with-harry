// recursion -> when a function call itself 

// que -> nth term of fibanacoi series  using recursion 

int fib ( int a , int b , int n , int count ){
    if(count==n){
        return b ;
    }

       int ans = a+b ;
    return fib( b , ans  , n , ++count);
}

#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter which term do you want" ;
    cin>>n;

    cout<<"it is fibo number is "<< fib(1,1,n,2);
return 0; 
}