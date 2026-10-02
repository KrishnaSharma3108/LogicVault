#include<iostream>
using namespace std;
int main()
{
int ns,loc=-1,b=0,e=4,mid,a[5]={10,30,50,90,150};
cout<<"enter no. to search";
cin>>ns;
while(b<=e)
{
    mid=(b+e)/2;
    if(ns==a[mid])
    {
        loc=mid;
        break;

    }
    if(ns>a[mid])
    {
        b=mid+1;
    }
    if(ns<a[mid])
    {
        e=mid-1;
    }
    
}
    if(loc==-1)
    {
        cout<<"no. is not found";
    }
    else
    {
        cout<<"loc="<<loc<<endl;
    }
    
    
    return 0;
}