#include<iostream>
using namespace std;
void factorial()
{
    int n,f,i;
    f=1;
    cout<<"enter a no.";
    cin>>n;
    i=n;
    while(i>=1)
    {
        f=f*i;
        i--;
    }
    cout<<"factorial="<<f<<endl;
}
int main()
{
    factorial();
    return 0;
}