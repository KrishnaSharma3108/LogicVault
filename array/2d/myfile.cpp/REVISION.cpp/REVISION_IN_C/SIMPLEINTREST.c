#include<stdio.h>
int main()
{
    float principal,rate,time,simple_intrest;
    printf("enter principal amount:");
    scanf("%f",&principal);
    printf("enter rate of interst(in perstange)");
    scanf("%f",&rate);
    printf("enter time(in years)");
    scanf("%f",&time);
    simple_intrest=(principal*rate*time)/100;
    printf("simple_intrest=%.2f\n",simple_intrest);
    return 0;
}