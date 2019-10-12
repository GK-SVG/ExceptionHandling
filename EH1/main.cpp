#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\n enter a number : ";
    cin>>a;
    try {
        cout<<"\n we are in try";
        if(a<0)
            throw (a);
        cout<<"\n Number is positive ";
    }
    catch (int b)
    {
        cout << "\n we are in catch";
        cout << "\n Number is nagative : " << b;
    }
    return 0;
}