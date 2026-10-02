#include<stdio.h>
#define PI 3.14
int main()
{
    double radius,area,circumfrence;
    printf("Enter the radius of the circle:");
    scanf("%lf",&radius);
    area=PI*radius *radius;
    circumfrence=2*PI*radius;
    printf("Area of the circle:%.2lf\n,area");
    printf("Circumfrence of the circle:%.2lf\n",circumfrence);
    return 0;
    
}