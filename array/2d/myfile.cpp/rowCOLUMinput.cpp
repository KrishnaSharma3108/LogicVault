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
int e;
cout<<"enter the elements";
cin>>e;
int arr[r][c];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cin>>arr[i][j];
    }
}
cout<<endl;
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        cout<<arr [i][j];
    }
   cout<<endl; 
}
    return 0;
}