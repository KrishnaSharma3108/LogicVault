#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    printf("before swaping :a=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swaping:a=%d,b=%d\n",a,b);
    return 0;
}