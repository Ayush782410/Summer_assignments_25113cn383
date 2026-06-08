#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout<<"Enter number of terms you want to print: ";
    cin>>n;

    int a=0, b=1, next;

    cout<<"Fibonacci Series: ";

    for(i=1;i<=n;i++)
    {
        cout<<a<<" ";
        next=a+b;
        a=b;
        b=next;
    }

}