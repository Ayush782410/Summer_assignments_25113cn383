#include <iostream>
using namespace std;

int main()
{
    int n, temp, rem, sum, i, fact;

    sum=0;

    cout<<"Enter the number to be checked: ";
    cin>>n;

    temp=n;

    while(n>0)
    {
        rem=n%10;

        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }

        sum=sum+fact;
        n=n/10;
    }

    if(sum==temp)
    {
        cout<<"Entered number is a Strong Number....";
    }
    else
    {
        cout<<"Entered number is not a Strong Number....";
    }

}