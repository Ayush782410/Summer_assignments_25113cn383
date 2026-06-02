#include <iostream>
using namespace std;

int main()
{
    int n, count;

    count=0;

    cout<<"Enter the number in which set bits are to be counted: ";
    cin>>n;

    while (n>0)
    {
        if (n%2==1)
        {
            count++;
        }

        n=n/2;
    }

    cout<<"Number of set bits in entered number is: "<<count;

}