#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cout<<"Enter the number whose factors are to be found: ";
    cin>>n;

    cout<<"Factors of entered number are: ";

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}