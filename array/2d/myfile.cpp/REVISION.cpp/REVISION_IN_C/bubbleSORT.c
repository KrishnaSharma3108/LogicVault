#include<stdio.h>
int main()
{
    int a[6],p,i,temp;
    printf("enter elements");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(p=1;p<=5;p++)
    {
        for(i=0;i<5;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf("elements are \n");
    
    for(i=0;i<6;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}