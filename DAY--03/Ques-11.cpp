#include <iostream>
using namespace std;

int main()
{
    int a, b, rem;

    cout<<"Enter two numbers: ";
    cin>>a>>b;

    while(b!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }

    cout<<"GCD of two numbers are: "<<a;

}