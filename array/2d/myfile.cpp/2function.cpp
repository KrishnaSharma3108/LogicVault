#include<iostream>
#include<math.h>
using namespace std;
int cube(int n)
{
 int r=pow(n,3);
    return r;
}
int square(int s)
{
    int r=pow(s,2);
    return r;
}
int main()
{
    int n,s,a;
    cout<<"enter a no:";
    cin>>a;
    if(a % 2 ==0)
    {
        n=cube(a);
        cout<<n;
    }
    else
    {
       n= square(a);
        cout<<n;
    }
    return 0;
}