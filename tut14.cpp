// user defined data structure ( structure , union & enum )

// structure -> it is the combination of different type of data structure 
// union -> one type of data can be selected at once , for better memory 
// enum -> it give the index value only 
// all are the user defined data structure 

#include<iostream>
using namespace std ;

typedef struct employe{
    int salary ;
    int hour ;

}emp;

union car {
 bool tata ;
 bool mahindra;
 bool bmw;

};

int main(){
struct employe devraj ; //declearation of entites(devraj) of employee 
devraj.salary=53000; // asigning a value to this 
devraj.hour=28;
 
cout<<"the salary of devraj is"<<devraj.salary<<endl;
cout<<"the hour devraj do works in week "<<devraj.hour<<endl;

// using typedef 
emp parth ;
parth.salary=76000;
parth.hour=34;

cout<<"the salary of parth is "<<parth.salary<<endl;
cout<<" the hour path do work is "<<parth.hour<<endl;

union car fvrt; // decleartion
fvrt.bmw=true;// asigning 

cout<<" the fvrt car bmw is "<<fvrt.bmw<<endl;// true;
cout<<" the fvrt car tata is  "<<fvrt.tata<<endl;// false or false anything ;


enum meal {breakfast, launch , dinner };
meal m1=dinner;
cout<<m1<<endl;        //2 
cout<<breakfast<<endl; //0


//size of 
cout<<"the size of struct is "<<sizeof(employe)<<endl;// sum of all varible
cout<<"the size of union is "<<sizeof(car)<<endl;// the  max variable in car
cout<<" the size of enum is "<<sizeof(meal)<<endl; //4 



return 0 ;
}