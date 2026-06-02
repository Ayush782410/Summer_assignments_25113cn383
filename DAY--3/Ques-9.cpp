#include <iostream>
using namespace std;

int main()
{
    int n, count, i;

    count=0;

    cout<<"Enter the value of n: ";
    cin>>n;


    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    if(count==2)
    {
        cout<<"Entered number is prime....";
    }
    else
    {
        cout<<"Entered number is not prime...";
    }

}