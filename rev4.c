#include<stdio.h>
int main(){
    int a[6]={3,5,6,1,2,0},i,j,min,loc,temp;
    for(i=0;i<=5;i++)
    {
        min=a[i];
        loc=i;
        for(j=i;j<=5;j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                loc=j;
            }
        }
        
            temp=a[i];
            a[i]=a[loc];
            a[loc]=temp;
        
    }
    for(i=0;i<=5;i++)
    {
        printf("%d\n",a[i]);
    }
}