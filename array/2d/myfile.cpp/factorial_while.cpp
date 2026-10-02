#include<iostream>
using namespace std;
int main()
{
    int n,f,i;
    f=1;
    cout<<"enter a no:";
    cin>>n;
    i=n;
    while(i>=1)
    {
        f=f*i;
        i--;
    }
    cout<<"factorial of no.="<<f<<endl;
    return 0;
} 
