#include <iostream>
using namespace std;

long long factorial(int n)
{
    long long fact=1;

    for (int i=1;i<=n;i++)
    {
        fact*=i;
    }

    return fact;
}

int main()
{
    int num;

    cout<<"Enter the number whose factorial is to be calculated: ";
    cin>>num;

    cout<<"Factorial of entered number is: "<<factorial(num);

}