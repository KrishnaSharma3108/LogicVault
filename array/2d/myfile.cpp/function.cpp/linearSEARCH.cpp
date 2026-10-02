#include<iostream>
using namespace std;
void linear_search(int arr[5],int ns)
{
    int i,loc=-1;
    for(i=0;i<5;i++)
    {
        if(ns==arr[i])
        {
            loc=i;
            break;
        }
    }
    if(loc==-1)
    {
        cout<<" not found";
    }
    else
    {
        cout<<" loc="<<loc<<endl;
    }
}
int main()
{
    int arr[5],i,ns;
    cout<<"enter array";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"enterno. to search";
    cin>>ns;
    linear_search(arr,ns);
    return 0;
}
