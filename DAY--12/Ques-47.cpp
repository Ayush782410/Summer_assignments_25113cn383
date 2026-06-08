#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a, b, c, i;

    a=0;
    b=1;

    for(i=1;i<=n;i++)
    {
        cout<<a<<" ";

        c=a+b;
        a=b;
        b=c;
    }
}

int main()
{
    int n;

    cout<<"Enter number of terms u want to print: ";
    cin>>n;

    fibonacci(n);

}