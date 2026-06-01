#include <iostream>
using namespace std;

int main()
{
    int n, original, reverse, rem;

    reverse=0;

    cout<<"Enter the number to be checked palindrome or not: ";
    cin>>n;

    original=n;

    while(n>0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }

    if(original==reverse)
        cout<<"Entered number is Palindrome Number";
    else
        cout<<"Entered number is Not a Palindrome Number";

        return 0;

}