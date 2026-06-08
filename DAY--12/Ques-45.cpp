#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int original, reverse;

    original=n;
    reverse=0;

    while(n>0)
    {
        reverse=reverse*10+n%10;
        n=n/10;
    }

    return original==reverse;
}

int main()
{
    int num;

    cout<<"Enter the number to be checked: ";
    cin>>num;

    if(palindrome(num))
        cout<<"Entered number is a Palindrome Number";
    else
        cout<<"Entered number is not a Palindrome Number";

}