#include<iostream>
using namespace std;
int main()
{
    int x[5]={10,20,8,9,7};
    int sum=0,*p,i;
    p=x;
    for(i=0;i<5;i++)
    {
        sum=sum+ *(p+i);
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}