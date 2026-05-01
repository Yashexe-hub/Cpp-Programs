#include<iostream>
using namespace std;

class demo
{
    public:
        int i;      //characteristics
        float f;    //characteristics

        demo()      //Constructor
        {
            cout<<"Inside constructor";
            i = 0;
            f = 0.0f;
        }

        ~demo()     //Destructor
        {
            cout<<"Inside destructor\n";
        }
        void fun()  //Behaviour
        {
            cout<<"Inside fun\n";

        }

};

int main()
{
    cout<<"Inside Main\n";

    demo dobj;     //Object creation

      cout<<"\n"<<dobj.i<<"\n";

      dobj.fun();
      
      cout<<"End of Main\n";

    return 0;
}