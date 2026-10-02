#include<iostream>
using namespace std;
int sum(int x,int y,int z)
{
    int s=x+y+z;
    return s;
}
int main()
{
    int x,y,z,s;
    cout<<"enter x,y,z";
    cin>>x>>y>>z;
    s=sum(x,y,z);
    cout<<s;
    return 0;
}