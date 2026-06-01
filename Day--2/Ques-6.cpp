#include <iostream>
using namespace std;

int main()
{
    int num, rev, rem;

    rev=0;

    cout<<"Enter the number whose reverse is to be found: ";
    cin>>num;

    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    cout<<"Reverse of the entered number is: "<<rev;

}