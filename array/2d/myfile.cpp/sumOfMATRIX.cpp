#include<iostream>
using namespace std;
int main()
{
int r;
cout<<"enter no. of rows";
cin>>r;
int c;
cout<<"enter no. of columns";
cin>>c;
cout<<"enter all the elements";
int arr[r][c];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cin>>arr[i][j];
    }
}

for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}
int sum=0;
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        sum=sum+arr[i][j];
    }
}
cout<<"the sum of matrix"<<sum<<endl;
    return 0;
}