#include<iostream>
using namespace std;

class base
{
    public:

    int i,j;

};  //8 bytes

class derived : public base
{
    public:

    int x,y;

};   //16 bytes

int main()
{
    base * bp = NULL;
    
    bp = new derived();          //Up casting
    

    return 0;
}
