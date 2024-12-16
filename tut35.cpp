// destructorr -> whenevr compiler get info like  there is no need of this object 
             //    it automatically invoked  destructor 

// ~ + constructor decleariton here we can free memory also 
// not take any argumetn neither it return anything 


// IMP n3 -> n2 -> n1 destructor whill we called in thismanner 


#include<iostream>
using namespace std ;

int count = 0 ;

class num {
    int data;
    public:
    num( int d ){
        count++;
        data=d ;
        cout<<" the dats for constructor is  "<<data<<endl;
        cout<<" the construcot for  count is  called "<<count<<endl;
    }
    ~num(){
        count--;
        cout<< "the data for dist is  "<<data<<endl;
        cout<< " the dist is called for count"<<count<<endl;
    }
};



int main(){
    num n1(10);
    {
        num n2(20);
        num n3(30);
        
        }   
 cout<<"out of block "<<endl;
return 0; 
}