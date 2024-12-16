// virtual function example & rules for virtual function 


// cwh -> code with harry 
#include<iostream>
#include<string>

using namespace std ;


class cwh {
    protected : 
    string s ;
    float rating ;
    public : 
        cwh ( string x , float rate ){
            s = x ; 
            rating = rate ;
        }

        virtual void display (){} // it means not to call them instead call their own class function 
     
};

class cwhvideo : public cwh  {
   float videolen ;
   public : 
      cwhvideo( string x , float rate , float vl ): cwh(x,rate){
        videolen = vl ;
      }
      void display(){
        cout<<" titile of this video"<<s<<endl;
        cout<<" length of this video "<<videolen<<endl;
        cout<<" rate  of this video "<<rating<<endl;
        
      }


};

class cwhtut : public cwh  {
   int words ;
   public : 
      cwhtut( string x , float rate , int vl ): cwh(x,rate){
     words  = vl ;
      }
      void display(){
        cout<<" titile of this video"<<s<<endl;
        cout<<" char  in this video "<<words<<endl;
        cout<<" rate  of this video "<<rating<<endl;
        
      }


};


int main() {
    string s = "   dev";
     cwhtut tut1( s, 4.4, 122 );   
     //tut1.display();

     cwhvideo v1(s ,4.3 , 3.3 );
     //v1.display();

     cwh * ptr[2];     // from here we used virtual function concept 
     ptr[0]= &tut1;
     ptr[1]= &v1 ;
     ptr[0]->display();
     ptr[1]->display();

    return 0 ;
}