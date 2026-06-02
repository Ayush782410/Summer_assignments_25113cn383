#include <iostream>
using namespace std;

int main()
{
    int n, i;
    
    cout<<"Enter position(n) you want to find: ";
    cin>>n;

    int a=0, b=1, next;

    if(n==1)
    {
        cout<<"Nth Fibonacci term is you want to find is: "<< a;
    }
    else if(n==2)
    {
        cout<<"Nth Fibonacci term you want to find is: "<<b;
    }
    else
    {
        for(i=3;i<=n;i++)
        {
            next=a+b;
            a=b;
            b=next;
        }
        cout<<"Nth Fibonacci term you want to find is:  " << b;
    }
}