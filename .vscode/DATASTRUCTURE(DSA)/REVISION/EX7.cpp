#include<iostream>
using namespace std;
int sum(int n)
{
    if(n>0)
    {
        return n+sum(n-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout<<"enter a number = ";
    cin>>n;
    cout<<"sum of series is = "<<sum(n)<<endl;
    return 0;
}