#include<iostream>
using namespace std;
void bubble(int a[7])
{
    int i,p,temp;
    for(p=1;p<=6;p++)
    {
        for(i=0;i<=5;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
int main()
{
    int a[7],n,p,i;
    cout<<"enter elements";
    for(i=0;i<=6;i++)
    {
        cin>>a[i];
    }
    bubble(a);
    cout<<"elements are"<<endl;
    for(i=0;i<=6;i++)
    {
        cout<<a[i];
    }
    return 0;
}