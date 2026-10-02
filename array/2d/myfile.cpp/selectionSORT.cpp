#include<iostream>
using namespace std;
int main()
{
int a[6]={10,5,1,2,9,3},i,j,loc,min,temp;
for(i=0;i<=5;i++)
{
    min=a[i];
    loc=i;
    for(j=i;j<=5;j++)
    {
        if(a[j]<min)
        {
            min=a[j];
            loc=j;
        }
    }
    temp=a[i];
    a[i]=a[loc];
    a[loc]=temp;
}    
for(i=0;i<=5;i++)
{
    cout<<a[i]<<endl;
}
    return 0;
}