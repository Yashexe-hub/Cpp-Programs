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
    derived * dp = NULL;
    base bobj;

    dp = &bobj;          //down casting

    return 0;
}
