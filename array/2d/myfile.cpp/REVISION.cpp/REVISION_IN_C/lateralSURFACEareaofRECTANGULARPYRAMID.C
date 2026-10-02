#include<stdio.h>
int main()
{
    int side;
    float side_length,slant_height,perimeter,lateral_surface_area;
    printf("enter the number of side of the base");
    scanf("%d",&side);
    printf("enter the length of each side:");
    scanf("%f",&side_length);
    printf("enter the slant height of the program");
    scanf("%f",&slant_height);
    perimeter=side*side_length;
    lateral_surface_area=0.5*perimeter*slant_height;
    printf("lateral surface area of the rectangular pyramid=%.2f\n",lateral_surface_area);
    return 0;
}