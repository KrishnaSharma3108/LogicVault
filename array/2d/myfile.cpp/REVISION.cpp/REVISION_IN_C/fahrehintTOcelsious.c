#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("enter temperature in fahrenheit");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("temprature in celsius:%2.f\n",celsius);
    return 0;
}