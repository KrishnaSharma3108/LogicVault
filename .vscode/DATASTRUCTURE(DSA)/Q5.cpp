#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c=0,i,n;
    cout<<"enter a number you want that the series cant greater than given number";
    cin>>n;
    if(n==0)
    {
        cout<<a;
    }
    if(n>=1)
    {
        cout<<a<<" "<<b;
    }
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(c>n)
        {
            break;
        }
        cout<<" "<<c;
        a=b;
        b=c;
    }
    return 0;
}
