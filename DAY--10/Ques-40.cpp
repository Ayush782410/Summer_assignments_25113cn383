#include <iostream>
using namespace std;

int main() {
    int rows, i, j;

    cout<<"Enter the number of rows: ";
    cin>>rows;

    for(i=1;i<=rows;i++) 
    {
        for(j=1;j<=rows-i;j++) 
        {
            cout<<" ";
        }

        for (j=0;j<i;j++) 
        {
            cout<<char('A'+j);
        }

        for(j=i-2;j>=0;j--) 
        {
            cout<<char('A'+j);
        }

        cout<<endl;
    }
}