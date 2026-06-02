#include <iostream>
using namespace std;

int main()
{
    int n, count;

    count=0;

    cout<<"Enter the number whose digits is to be counted: ";
    cin>>n;

    while(n!=0)
    {
        n=n/10;
        count++;
    }

    cout<<"Number of digits in the given number is: "<<count;
}