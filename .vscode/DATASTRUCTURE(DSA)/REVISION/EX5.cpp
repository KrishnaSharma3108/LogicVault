#include<iostream>
using namespace std;
void prime(int n ,int f,int i)
{
    if(i<=n)
    {
        if(n%i==0)
        {
            f++;  
        }
         prime(n,f,i+1);
    }
    else
    {
        if(f==2)
        {
            cout<<"prime $ ";
        }
        else
        {
            cout<<"not prime @";
        }
    }
}
int main()
{
    prime(4,0,1);
    return 0;
}