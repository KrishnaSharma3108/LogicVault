#include<stdio.h>
int main()
{
    int a[10],loc=-1,ns,i;
    printf("enter elements in array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter elements to search");
    scanf("%d",&ns);
    for(i=0;i<10;i++)
    {
        if(ns==a[i])
        {
            loc=i;
            break;
        }
    }
    if(loc=-1)
    {
        printf("not found");
    }
    else
    {
        printf("loc=%d",loc);
    }
     return 0;
}