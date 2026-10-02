#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter number of rows = ";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}