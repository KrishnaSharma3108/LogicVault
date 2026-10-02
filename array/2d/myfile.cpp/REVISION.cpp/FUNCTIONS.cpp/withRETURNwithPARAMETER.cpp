#include<iostream>
using namespace std;
int sum(int x,int y)
{
    int z=x+y;
    return z;
}
int main()
{
    int x,y,z;
    cout<<"enter x,y";
    cin>>x>>y;
    z=sum(x,y);
    cout<<z;
    return 0 ;
}