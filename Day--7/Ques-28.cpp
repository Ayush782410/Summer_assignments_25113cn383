#include <iostream>
using namespace std;

int rev = 0;

void reverseNumber(int n)
{
    if (n==0)
        return;

    rev=rev*10+(n%10);
    reverseNumber(n/10);
}

int main()
{
    int n;

    cout<<"Enter the number whose reverse is to be printed: ";
    cin>>n;

    reverseNumber(n);

    cout<<"Reverse of entered number is: "<<rev;

}