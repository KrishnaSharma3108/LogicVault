#include<iostream>
using namespace std;
void even(int ar[10],int n)
{
    int i;
    cout<<"even elements"<<endl;
    for(i=0;i<=9;i++)
    {
        if(ar[i]%2==0)
        cout<<ar[i];
    }
}
int main()
{
    int ar[10],i,n;
    cout<<"enter elements";
    for(i=0;i<10;i++)
    {
        cin>>ar[i];
    }
    even(ar,10);
    return 0;
}