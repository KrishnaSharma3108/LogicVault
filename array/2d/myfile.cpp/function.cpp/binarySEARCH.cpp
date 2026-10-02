#include<iostream>
using namespace std;
void binary2(int a[10],int ns)
{
    int loc=-1,b=0,e=9,mid;
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
        cout<<"not found";
    }
    else
    {
        cout<<"loc="<<loc<<endl;
    }
}
int main()
{
    int ns,a[10]={10,20,30,40,50,60,70,80,90,100};
    cout<<"enter no. to search";
    cin>>ns;
    binary2(a,ns);
    return 0;
}