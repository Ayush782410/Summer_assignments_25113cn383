#include <iostream>
using namespace std;

int main()
{
    int binary, decimal, base, rem;

    decimal=0;
    base=1;

    cout<<"Enter the binary number to be converted to decimal: ";
    cin>>binary;

    while(binary>0)
    {
        rem=binary%10;
        decimal=decimal+rem*base;
        base=base*2;
        binary=binary/10;
    }

    cout<<"Decimal conversion of entered binary number is: "<<decimal;
}