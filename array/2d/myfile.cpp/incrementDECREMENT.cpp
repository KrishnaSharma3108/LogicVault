#include<iostream>
using namespace std;
int main()
{
int a,b,c;
a=9;
b=5;
c=a++ + ++b;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
cout<<"c="<<c<<endl;    
    return 0;
}