#include<iostream>
using namespace std;
void sum(int x,int y){
    int z=x+y;
    cout<<z;
}
int main()
{
    int x,y;
    cout<<"enter x,y";
    cin>>x>>y;
    sum(x,y);
    return 0;
}