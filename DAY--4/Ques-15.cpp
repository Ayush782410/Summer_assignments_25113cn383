#include <iostream>
using namespace std;

int main()
{
    int n, temp, rem, sum;

    sum=0;

    cout<<"Enter the number to be checked: ";
    cin>>n;

    temp=n;

    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }

    if(sum==temp)
        cout<<"Entered number is an Armstrong number";
    else
        cout<<"Entered number is not an Armstrong number";

}
