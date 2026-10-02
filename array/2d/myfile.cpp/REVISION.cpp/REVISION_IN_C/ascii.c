#include<stdio.h>
int main()
{
    char c1,c2;
    int ascii1,ascii2,sum=0;
    printf("Enter 2 character:",c1,c2);
    scanf("%c%c",&c1,&c2);
    ascii1=(int)c1;
    ascii2=(int)c2;
    sum=ascii1+ascii2;
    printf("Ascii value of%C is%d\n",c1,ascii1);
    printf("Ascii value of%c is%d\n",c2,ascii2);
    printf("sum of Ascii value:%d\n",sum);
    return 0;
}