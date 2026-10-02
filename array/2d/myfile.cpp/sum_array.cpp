#include<iostream>
using namespace std;
int main()
{
int arr[5],i,sum=0;
cout<<"enter elements ";
for(i=0;i<5;i++)
cin>>arr[i];
for(i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
    sum=sum+arr[i];
}    
cout<<"total is"<<sum<<endl;
    return 0;
}