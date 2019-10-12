#include<iostream>
using namespace std;
int main()
{
    char a='k';
    try {
        cout<<"\n we are in try";
        if (a>8)
            throw(a);
        throw(a);
    }
    catch(int a)
           {
               cout<<"\n Number is greater  8 than";
           }
    catch (...)
    {
        cout<<"\n Default exception : "<<a;
    }
    cout<<"\n finished";
    return 0;
}