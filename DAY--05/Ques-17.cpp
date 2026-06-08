#include <iostream>
using namespace std;

int main()
{
    int n, sum, i;

    sum=0;

    cout<<"Enter the number to be checked: ";
    cin>>n;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }

    if(sum==n)
        cout<<"Entered number is a perfect number....";
    else
        cout<<"Entered number is not a perfect number....";

}