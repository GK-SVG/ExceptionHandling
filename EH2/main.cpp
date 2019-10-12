#include<iostream>
using namespace std;
int main()
{
    int a=10;
    try {
        cout<<"\n we are in try";
        if (a>8)
            throw(a);
    }
 /*   catch(int a)
    {
        cout<<"\n Number is greater  8 than";
    }*/
    catch (...)
    {
        cout<<"\n Default exception";
    }
    cout<<"\n finished";
    return 0;
}