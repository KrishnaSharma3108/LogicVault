#include<iostream>
using namespace std;
int main(){
int qty;
float discount,bill;
cout<<"enter qty";
cin>>qty;
if(qty<=10)
{
    discount=0;
}
else if(qty>=11&&qty<=30)
{
    discount=20.0*0.03;
}
else if(qty>=31&&qty<=50)
{
    discount=20.0*0.05;
}
else if(qty>50)
{
    discount=20.0*0.09;
}
else
{
    discount=0;
}
bill=(20-discount)*qty;
cout<<"discount="<<discount<<endl;
cout<<"bill="<<bill<<endl;
    return 0;
}

