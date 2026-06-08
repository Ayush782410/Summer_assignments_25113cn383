#include <iostream>
using namespace std;

bool armstrong(int n)
{
    int original, sum, digit;
    
    original=n;
    sum=0;

    while(n>0)
    {
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }

    return original==sum;
}

int main()
{
    int num;

    cout<<"Enter the number to be checked: ";
    cin>>num;

    if(armstrong(num))
        cout<<"Entered number is an Armstrong Number";
    else
        cout<<"Entered number is not an Armstrong Number";

}