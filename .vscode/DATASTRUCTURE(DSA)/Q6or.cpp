#include<iostream>
using namespace std;
int main()
{
    int n,f=0,rem=0;
    cout<<"enter a number = ";
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        f=0;
        for(int i=1;i<=rem;i++)
        {
            if(rem%i==0)
            {
                f++;
            }
        }
        if(f==2)
        {
            cout<<rem;
        }
        n=n/10;
    }
    return 0;
}