#include<stdio.h>
int main()
{
    int ar[10],i,ns,loc=-1;
    printf("enter a array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("enter a no to search");
    scanf("%d",&ns);
    for(i=0;i<10;i++)
    {
        if(ns==ar[i])
        {
            loc=i;
            break;
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