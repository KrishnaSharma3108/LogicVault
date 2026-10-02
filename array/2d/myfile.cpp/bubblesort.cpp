#include<iostream>
using namespace std;
int main()
{
int a[6],p,i,temp;
cout<<"enter elements";
for(i=0;i<=5;i++)
{
    cin>>a[i];
}    
for(p=1;p<=5;p++)
{
    for(i=0;i<=4;i++)
    {
        if(a[i]>a[i+1])
    
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
}
cout<<"elements are"<<endl;
for(i=0;i<=5;i++)
{
    cout<<a[i]<<endl;
}
    return 0;
}