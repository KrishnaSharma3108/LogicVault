#include<stdio.h>
int main(){
    int a[6]={5,6,9,75,4,5},de,i,loc;
    printf("enter elements to del");
    scanf("%d",&de);
    printf("enter loc");
    scanf("%d",&loc);
    for(i=loc;i<=5;i++)
    {
        a[i]=a[i+1];
    }
    a[loc]=de;
    for(i=0;i<=4;i++)
    {
        printf("%d\n",a[i]);
    }

     
    return 0;
}