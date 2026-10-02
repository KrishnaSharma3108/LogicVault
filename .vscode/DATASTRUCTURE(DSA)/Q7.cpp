#include<iostream>
using namespace std;
int main()
{
int n,i,j;
cout<<"enter the number of rows = ";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=n/2;j++)
    {
        cout<<i*j<<" ";
    }
    cout<<endl;
}
return 0;
}