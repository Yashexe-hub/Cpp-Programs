#include<iostream>
using namespace std;

int main()
{
    //We can create one refrence to one variable

    int no = 11;
    int &x = no;

    //We can create multiple refrences for single variable
    int &y = no;

    //We can create refrence to refrence
    int &z = y;

    //We can create refrence to pointer
    int *p = &no;
    int *(&q) = p;


    return 0;

}