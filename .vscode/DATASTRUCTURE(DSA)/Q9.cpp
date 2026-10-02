#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k=1;
    cout<<"enter a number rows = ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}