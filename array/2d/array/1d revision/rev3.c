#include<stdio.h>
int main(){
    int p,i,temp,a[6]={5,2,6,3,8,9};
    for(p=0;p<5;p++)
    {
        for(i=0;i<=4;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
   // printf("%d",a[i]);    

    }
    for(i=0;i<=5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}