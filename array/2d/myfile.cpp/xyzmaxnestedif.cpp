#include<iostream>
using namespace std;
int main(){
int x,y,z;
cout<<"enter x,y,z";
cin>>x>>y>>z;
if(x>y)
{
    if(x>z)
    {
        cout<<"x max";
    }
}    
if(y>x)
{
    if(y>z)
    {
        cout<<"y max";
    }
}
if(z>x)
{
    if(z>y)
    {
        cout<<"z max";
    }
}

    return 0;
}