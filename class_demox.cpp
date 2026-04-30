#include<iostream>
using namespace std;

class demo
{
    public:
        int i;      //characteristics
        float f;    //characteristics

        void fun()  //Behaviour
        {
            cout<<"Inside fun\n";

        }

};

int main()
{

    demo dobj;

    cout<<sizeof(dobj)<<"\n";  //8 bytes
    
    return 0;
}