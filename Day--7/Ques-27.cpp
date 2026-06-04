#include <iostream>
using namespace std;

int sumDigits(int n)
{
    if (n ==0)
        return 0;

    return (n%10)+sumDigits(n/10);
}

int main()
{
    int n;

    cout<<"Enter the number whose sum of digits is to be printed: ";
    cin>>n;

    cout<<"Sum of digits of entered number are: "<<sumDigits(n);

}
