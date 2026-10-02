#include<iostream>
using namespace std;
void fabb(int n,int n1=0,int n2=1,int i=1)
{
    if(n<=0)
    {

        cout<<n1<<" ";
        fabb(n,n2,n1+n2,i+1);
    }
}
int main()
{
    int n;
    cout<<"enter a number = ";
    cin>>n;
    fabb(n);
    return 0;
}