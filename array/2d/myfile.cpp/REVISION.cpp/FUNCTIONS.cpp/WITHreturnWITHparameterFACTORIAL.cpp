#include<iostream>
using namespace std;
int factorial(int n,int f,int i)
{
    while(i>=1)
    {
        f=f*i;
        i--;
    }
    return f;
}
int main()
{
    int n,f,i;
    f=1;
    cout<<"enter a no";
    cin>>n;
    i=n;
    f=factorial(n,f,i);
    cout<<"factorial="<<f<<endl;
    return 0;
}