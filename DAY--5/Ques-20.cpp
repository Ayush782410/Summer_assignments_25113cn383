#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cout<<"Enter the number whose lar. prime factors to be found: ";
    cin>>n;

    int largestPrime=-1;

    while(n%2==0)
    {
        largestPrime=2;
        n=n/2;
    }

    for(i=3;i<=n;i=i+2)
    {
        while(n%i==0)
        {
            largestPrime=i;
            n=n/i;
        }
    }

    if(n>2)
    {
        largestPrime=n;
    }

    cout<<"Largest Prime Factor of the entered number is: "<<largestPrime;
    
}