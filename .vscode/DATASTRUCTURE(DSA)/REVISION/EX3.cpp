#include<iostream>
using namespace std;
void fibb(int a,int b,int n,int f,int i)
{
    if(n==1)
    {
        cout<<0<<endl;
    }
    else if(n==2)
    {
        cout<<0;
        cout<<1<<endl;
    }
    else if(i<=n)
    {
        if(f==0)
        {
            cout<<a<<" "<<b<<" "<<a+b<<" ";
            f=1;
            i=2;
        }
        else
        {
            cout<<a+b<<" ";
        }
        fibb(b,a+b,n,f,i+1);
    }
}
int main()
{
    fibb(0,1,8,0,1);
    return 0;
}