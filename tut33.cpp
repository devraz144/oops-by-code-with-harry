// dyanmic intillization of object constructor -> at the runtime you will know
// which constructor is to be called

// IMP -> if parametrized constructor is there then default constructor is must
//  if u dont have default constructor then (bankdepost a1) it will give us error

#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    float rate;
    int year;
    float returnvalue;

public:
   /* bankdeposit()
    {
    }*/
    bankdeposit(int p, int r, int y)
    {
        principal = p;
        rate = r / 100.0;
        year = y;
        returnvalue = p;

        for (int i = 0; i < year; i++)
        {
            returnvalue = returnvalue * (1 + rate);
        }
    }
    bankdeposit(int p, float r, int y)
    {
        principal = p;
        rate = r;
        year = y;
        returnvalue = p;
        for (int i = 0; i < year; i++)
        {
            returnvalue = returnvalue * (1 + rate);
        }
    }
    void show()
    {
        cout << "the total amount is " << returnvalue << endl;
    }
};

int main()
{

    bankdeposit b2(1000, 0.4f, 1);
    bankdeposit b3(1000, 5, 1);

    b2.show();
    b3.show();
     //bankdeposit b1 ; // it will throw error as we have comment the default constructor 
    return 0;
}