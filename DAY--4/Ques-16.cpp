#include <iostream>
using namespace std;

int main()
{
    int start, end, num, rem, sum, temp;

    cout<<"Enter start of range: ";
    cin>>start;

    cout<<"Enter end of range: ";
    cin>>end;

    cout<<"Armstrong numbers between "<<start<<" and "<<end<<" are:\n";

    for(num=start;num<=end;num++)
    {
        temp=num;
        sum=0;

        while(temp>0)
        {
            rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp=temp/10;
        }

        if(sum==num)
        {
            cout<<num<<" ";
        }
    }

}