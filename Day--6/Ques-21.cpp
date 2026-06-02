#include <iostream>
using namespace std;

int main()
{
    int n, binary, place, rem;

    binary=0;
    place=1;

    cout<<"Enter the decimal number to be converted to binary: ";
    cin>>n;

    while(n>0)
    {
        rem=n%2;
        binary=binary+rem*place;
        place=place*10;
        n=n/2;
    }

    cout<<"Binary conversion of the entered decimal number is: "<<binary;

}