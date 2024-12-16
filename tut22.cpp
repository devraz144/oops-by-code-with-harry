// oop recap & nesting of memnber function 

/*
proerties -> are the vaible of the classes 
method  -> are the function of the classes 
dev.salary =8 makes no sense if salary is private 
*/ 


//   nesting of member fumctionl -> to call fun from 
//   another function ,so that we do not to call that from our main function 


//      flow input_str->chk_bin->display 
//        IMP -> if you declare a function then you dont define it then it will not throw any error
//        but as you will call it . then undefined rederence to bin :: 

#include<iostream>
#include<string>
using namespace std ;

class bin{
string a ;

void chk_bin(void);

public:

void input_str(void );
void ones_comp( void );
void display (void );


};

void bin::input_str( void){
    cout<<"enter the binary string "<<endl;
    cin>>a ;
    chk_bin();
}

void bin::chk_bin(){
    
    for( int i =0 ; i< a.length(); i++){
        if(a.at(i)!='0' && a.at(i)!='1'){
            cout<<"enter you have written wrong string "<<endl;
            exit(0);
        }
    }
    display();
}

void bin::display( void ){
    for( int i =0 ; i< a.length();i++){
        cout<<a[i];
    }
    cout<<endl;
}

int main(){
    bin b1 ;
   // b1.input_str();
    b1.ones_comp();
    return 0 ;

}