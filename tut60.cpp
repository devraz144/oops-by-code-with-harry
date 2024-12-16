// c++ reading and writing file 

/*
#include<fstream>
the useful class for working with file in ++

1.fstreambase
2.ifstream -> derived from fstreambase
3.ofstream  -> derived from fstreambase 

in order to work with file 
-> two ways to open the file 
1. using the constructor 
2. using the memeber function open() of the class

ifstrema -> to read from the file -> ( >>)  for read 
ofstream -> to write in the file  -> (<<) this is opertor for write 


*/

#include<iostream>
#include<fstream>
using namespace std ;


int main(){
    // opening filr using constructor 
    // ofstream rt("tut60.txt"); // write operation 
    //rt<<"this is your new file";

    // opening file using constructor and reading it 
    string s;
    ifstream dev("tut60.txt");
    //dev>>s; // it will have the output till space then other data will not com with 
    //cout<<s; // to solve this problem we use 
    getline(dev , s); // it only read one line at a time 
    cout<<s;
    
 
return 0; 
}