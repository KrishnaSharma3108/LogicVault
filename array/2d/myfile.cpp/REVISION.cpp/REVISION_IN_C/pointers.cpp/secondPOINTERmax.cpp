#include<iostream>
using namespace std;
int main()
{
    int x[5]={50,6,7000,450,86};
    int m1=0,m2=0,*p,i;
    p=x;
    for(i=0;i<5;i++)
    {
        if(*(p+i)>m1)
        {
            m1=x[i];
        }
    }
    for(i=0;i<5;i++)
    {
        if(*(p+i)>m2&&x[i]!=m1)
        {
            m2=x[i];
        }
    }
    cout<<"maxxxx element is:--->>>"<<m1<<" "<<m2<<endl;
    return 0;
}