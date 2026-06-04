#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n==0 || n==1)
        return 1;

    return n*factorial(n-1);
}

int main()
{
    int n;

    cout<<"Enter the number whose factorial is to be printed: ";
    cin>>n;

    cout <<"Factorial of entered number is: "<<factorial(n);

}