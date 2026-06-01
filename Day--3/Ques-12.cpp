#include <iostream>
using namespace std;

int main()
{
    int a, b, x, y, rem;

    cout<<"Enter any two numbers: ";
    cin>>a>>b;

    x=a;
    y=b;

    while(y!=0)
    {
        rem=x%y;
        x=y;
        y=rem;
    }

    int gcd=x;
    int lcm=(a*b)/gcd;

    cout<<"LCM of numbers are: "<<lcm;
}