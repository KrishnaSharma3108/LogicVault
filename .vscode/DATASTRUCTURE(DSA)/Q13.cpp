#include<iostream>
using namespace std;
int main()
{
    int arr[6]={10,20,30,40,50},pos,value,i;
    cout<<"enter the value of the position where you want enter element = ";
    cin>>pos;
    cout<<"enter element to insert = ";
    cin>>value;
    for(i=6;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    cout<<"change array is = ";
    for(i=0;i<=5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}