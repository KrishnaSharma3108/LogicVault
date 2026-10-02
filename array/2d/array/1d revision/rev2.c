#include<stdio.h>
int main(){
    int ns,loc=-1,mid,b=0,e=9,a[10]={10,20,30,40,50,60,80,450,4560,10000};
    printf("enter elements to search");
    scanf("%d",&ns);
    while(b<=e)
    {
        mid=(b+e)/2;
        if(ns==a[mid])
        {
            loc=mid;
            break;
        }
        if(ns<a[mid])
        {
            e=mid-1;
        }
        if(ns>a[mid])
        {
            b=mid+1;
        }
    }
    if(loc==-1)
    {
        printf("not found");
    }   
    else
    {
        printf("loc=%d",loc);
    } 

    return 0;
}