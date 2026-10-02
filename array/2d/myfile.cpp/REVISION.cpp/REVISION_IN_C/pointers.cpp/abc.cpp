#include<iostream>
using namespace std;
int main()
{
    int *a;//={10,20,30,40,50};
    int i;
    a=new int(sizeof(int)*5);
    for(i=0;i<=4;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<=4;i++)
    {
        cout<<*(a+i)<<endl;
    }
    return 0;
}