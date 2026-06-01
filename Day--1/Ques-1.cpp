#include <iostream>
using namespace std;

int main()
{
    int n, i, sum;

    sum=0;

    cout<<"Enter the value of n: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    cout<<"Final sum of first n natural no. are: "<<sum;

}