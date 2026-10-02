#include<iostream>
using namespace std;
int main()
{
    int x[5]={896,45,0,7000,50};
    int maxx1=0,*p,i,maxx2=0,maxx=0;
    p=x;
    for(i=0;i<5;i++)
    {
        if(*(p+i)>maxx&&*(p-i)>maxx)
        {
            maxx1=*(p+i);
        }
    
       
        
    }
    cout<<"maxx element is:->>>>>>"<<maxx1<<" "<<maxx2<<endl;
    return 0;
}