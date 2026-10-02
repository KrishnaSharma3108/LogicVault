#include<stdio.h>
#define PI 3.14
int main()
{
    float radius,height,volume,surface_area;
    printf("enter the radius of the cyclinder:");
    scanf("%f",&radius);
    printf("enter the height of the cyclinder:");
    scanf("%f",&height);
    volume=PI*radius*height;
    surface_area=2*PI*radius*(height+radius);
    printf("volume of the cyclinder=%.2f\n",volume);
    printf("surface_area of the cyclinder=%.2f\n",surface_area);
    return 0;
}