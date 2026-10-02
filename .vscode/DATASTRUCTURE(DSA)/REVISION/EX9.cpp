#include<iostream>
using namespace std;
int sq(int n)
{
    if(n>=1)
    {
        if(n%2!=0)
        {
            return n*n + sq(n-1);
        }
        else
        {
            return sq(n-1);
        }
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout<<"enter a number= ";
    cin>>n;
    cout<<"sum of series of odd numbers = "<<sq(n)<<endl;
    return 0;
}