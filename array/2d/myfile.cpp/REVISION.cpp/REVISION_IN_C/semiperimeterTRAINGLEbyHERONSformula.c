#include<stdio.h>
int main()
{
    float a,b,c,s;
    printf("enter the length of the three sides of the triangle");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("the semiperimeter of the triangle is =%.2f\n",s);
    return 0;
}