#include <iostream>
using namespace std;

int main()
{
    int num, sum, rem;

    sum=0;

    cout<<"Enter the number whose sum of digit is to be found: ";
    cin>>num;

    while(num>0)
    {
        rem=num%10;   
        sum=sum+rem;
        num=num/10;     
    }

    cout<<"Final sum of digit of a number is: "<<sum;
}