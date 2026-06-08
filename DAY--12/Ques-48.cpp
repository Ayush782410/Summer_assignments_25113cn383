#include <iostream>
using namespace std;

bool perfect(int n)
{
    int sum, i;

    sum=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }

    return sum==n;
}

int main()
{
    int num;

    cout<<"Enter the number to be checked is perfect or not: ";
    cin>>num;

    if(perfect(num))
        cout<<"Entered number is perfect Number";
    else
        cout<<"Entered number is not a Perfect Number";

}