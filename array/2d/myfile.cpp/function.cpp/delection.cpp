#include<iostream>
using namespace std;
void insert(int a[5],int ne,int loc)
{
    int i;
    for(i=3;i>loc;i--)
    {
        a[i]=a[i+1];
    }
    a[loc]=ne;
    for(i=0;i<=5;i++)
    {
        cout<<a[i];
    }
}
int main()
{
    int loc,ne,a[5]={10,20,30,40,50};
    cout<<"enter no. to del";
    cin>>ne;
    cout<<"enter loc";
    cin>>loc;
    insert(a,ne,loc);
    return 0;
}