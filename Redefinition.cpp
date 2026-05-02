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



};   //16 bytes

int main()
{
    base * bp = NULL;
    
    bp = new derived();          //Up casting
    

    return 0;
}
