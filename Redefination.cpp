#include<iostream>
using namespace std;

class base
{
    public:

    int i,j;

    void fun()
    { cout<<"Inside Base Fun\n";}

    void gun()
    { cout<<"Inside Base Gun\n";}

    void sun()
    { cout<<"Inside Base sun\n";}


};  //8 bytes

class derived : public base
{
    public:

    int x,y;

    void fun()
    { cout<<"Inside Derived Fun";}           //Redfnation

     void sun()
    { cout<<"Inside Derived sun";}           //Redination

     void run()
    { cout<<"Inside Derived run";}           //Defination


};   //16 bytes

int main()
{
    base * bp = NULL;
    
    bp = new derived();          //Up casting
    
    bp -> fun();            //Base fun
    bp -> gun();            //Base gun
    bp -> sun();            //Base sun
    //bp -> run();            Error



    return 0;
}
