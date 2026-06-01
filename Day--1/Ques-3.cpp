#include <iostream>
using namespace std;

int main()
{
    int n, i;
    long long fact=1;

    cout<<"Enter the number whose factorial is to be printed: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    cout<<"Factorial of the given number is: " <<fact;
}