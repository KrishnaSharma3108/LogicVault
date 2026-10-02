#include<iostream>
using namespace std;
int main()
{
    int arr[6]={10,20,30,40,50},pos=5,ns,i;
    cout<<"enter number to input = ";
    cin>>ns;
    for(i=0;i<5;i++)
    {
        if(ns<arr[i])
        {
            pos=i;
            break;
        }
    }
    for(i=5;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=ns;
    cout<<"change array";
    for(i=0;i<=5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}