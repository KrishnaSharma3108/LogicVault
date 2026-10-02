#include<iostream>
using namespace std;
int main(){
int temp,sum=0,rem=0,n;
cout<<"enter a no";
cin>>n;
temp=n;
while(n>0)
{
    rem=n%10;
    sum=sum+(rem*rem*rem);
    n=n/10;
}
if(temp==rem)
{
    cout<<"no. is armstrong";
}
else
{
    cout<<"no. is not armstrong";
}
    return 0;

}