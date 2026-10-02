#include<iostream>
using namespace std;
int main()
{
int ns,i,loc=-1,a[10];
cout<<"enter elements";
for(i=0;i<10;i++)
{
    cin>>a[i];
}    
cout<<"enter elements to search";
cin>>ns;
for(i=0;i<10;i++)
{
    if(ns==a[i])
    {
        loc=i;
        break;
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
    return 0;
}