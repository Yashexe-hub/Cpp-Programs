#include<iostream>
using namespace std;

class base
{
    public:

    int i,j;

    void fun()
    { cout<<"Inside Base Fun\n";}

    virtual void gun()
    { cout<<"Inside Base Gun\n";}

    virtual void sun()
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

    virtual void run()
    { cout<<"Inside Derived run";}           //Defination


};   //16 bytes

int main()
{
    base * bp = new derived();               //Up casting

    bp -> fun();                          //Base fun
    bp -> gun();                          //Base gun
    bp -> sun();                          //Derived sun
    //bp -> run();                          //Error

    return 0;
}
