#include<iostream>
using namespace std;
void sum(int *a,int *b);
void sum(int *a,int *b)
{
    int c=*a * *b;
    cout<<c;
}
int main()
{
    int x,y;
    cout<<"enter x, y";
    cin>>x>>y;
    sum(&x,&y);
    return 0;
}