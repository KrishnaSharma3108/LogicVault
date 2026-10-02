#include<iostream>
using namespace std;
int main()
{
    int arr[6]={5,10,15,20,25,30},i,loc=-1,del;
    cout<<"enter number to delete = ";
    cin>>del;
    for(i=0;i<6;i++)
    {
        if(arr[i]==del)
        {
            loc=i;
            cout<<"location of search element = "<<loc<<endl;
            break;
        }
    }
    if(loc==-1)
    {
        cout<<"number is not in the array ";
    }
    else
    {
        for(i=loc;i<5;i++)
        {
            arr[i]=arr[i+1];
        }
        cout<<" element left after delection = ";
        for(i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}