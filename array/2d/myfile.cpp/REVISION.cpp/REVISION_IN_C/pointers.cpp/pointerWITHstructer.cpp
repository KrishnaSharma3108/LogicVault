#include<iostream>
using namespace std;
struct sum
{
    int a,b,c;
}s,*p;
int main()
{
    p=&s;
    cout<<"enter the value of "<<endl;
    cin>>p->a>>p->b;
    p->c=p->a+p->b;
    cout<<p->c<<endl;
    return 0;

}