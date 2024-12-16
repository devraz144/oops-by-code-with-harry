// memory allocation & array in classes 

/*

some memory is common for all object ; eg -> nation , county , gendre
some memory is unique for all object ; eg -> phone_no , name , account_No
function are the part of common memory 
 
*/


#include<iostream>
using namespace std ;

class shop{
int itemid[100];
int itemprice[100];
int counter ;

public :
void getprice();
void init_counter(void ){ counter=0 ;}
void setdata(int x , int y );


};

void shop:: setdata(int x , int y ){
    itemid[counter] =x ;
    itemprice[counter]=y;
    counter++;
}
void shop:: getprice( void ){

    for(int i =0 ; i< counter ; i++){
        cout<<"the item id of this item "<<itemid[i]<<"the price of this item "<<itemprice[i]<<endl;
    }
}

int main(){
    shop s1 ;
    s1.init_counter();
    s1.setdata(31,100);
    s1.setdata(32,200);
    s1.setdata(33,300);
    s1.getprice();
 
return 0; 
}