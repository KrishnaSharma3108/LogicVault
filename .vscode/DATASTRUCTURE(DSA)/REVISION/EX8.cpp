#include<iostream>
using namespace std;
int sq(int i,int n)
{
    if(i<=n)
    {
        if(i%2!=0)
        {
            //f=n*n;
           return (i*i)+ sq(i+1,n);
        }
        else
        {
            return sq(i+1,n);
        }
    }
    else
    {
    return 0;
    }
}
int main()
{
    cout<<sq(1,10);
    return 0;
}