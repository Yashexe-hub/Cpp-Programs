#include<iostream>
using namespace std;

class Base
{
    public:
    int i, j;

    Base()
    {
        cout<<"Inside base constructor\n";
        i = 0;
        j = 0;
        
    }

    ~Base()
    {
        cout<<"Inside Base Destructor\n";
    }

    void fun()
    {
        cout<<"Inside base fun\n";
    }

};

class Derived : public Base
{
    public:
    int x;

    Derived()
    {
        cout<<"Inside Derived constructor\n";
        x = 0;
    }

    ~Derived()
    {
        cout<<"Inside derived destructor\n";
    }

    void gun()
    {
        cout<<"Inside gun of derived\n";
    }
};
int main()
{
    cout<<"Inside Main\n";

    Derived dobj;
    
    cout<<"Size of Base class object is : "<<sizeof(Base)<<"\n";        //8 bytes
    cout<<"Size of derived class object is : "<<sizeof(Derived)<<"\n";  //12 bytes

    cout<<dobj.i<<"\n";   // 0
    cout<<dobj.j<<"\n";   // 0
    cout<<dobj.x<<"\n";   // 0

    dobj.fun();
    dobj.gun();

    cout<<"End of main\n";

    return 0;
}