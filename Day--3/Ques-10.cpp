#include <iostream>
using namespace std;

int main()
{
    int n, count, i, j;

    cout<<"Enter the range in which you want to find prime numbers: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            cout<<i<<" ";
        }
    }
    
}