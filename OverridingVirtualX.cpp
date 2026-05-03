#include<iostream>
using namespace std;

class base
{
    public:

    int i,j;

    void fun()                             //1000
    { cout<<"Inside Base Fun\n";}

    virtual void gun()                     //2000
    { cout<<"Inside Base Gun\n";}

    virtual void sun()                     //3000
    { cout<<"Inside Base sun\n";}


};  //8 bytes

class derived : public base
{
    public:

    int x,y;

    void fun()                               //4000
    { cout<<"Inside Derived Fun";}           

     void sun()                              //5000
    { cout<<"Inside Derived sun";}           

    virtual void run()                       //6000
    { cout<<"Inside Derived run";}          


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
