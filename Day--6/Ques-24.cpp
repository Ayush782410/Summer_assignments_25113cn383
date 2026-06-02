#include <iostream>
using namespace std;

int main()
{
    int x, n, result, i;

    result=1;

    cout<<"Enter the value of x: ";
    cin>>x;

    cout<<"Enter the value of n: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        result=result*x;
    }

    cout<<x<<"^"<<n<<" : "<<result;

}