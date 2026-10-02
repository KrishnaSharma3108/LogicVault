#include<stdio.h>
int main()
{
    int a,b,c;
    //float x;
    //printf("%d\n",sizeof(x));
    printf("Enter a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    int r=(a>b)?((a>c)?a:c):(b>c)?b:c;
    //3
    //
    //(a>b)?((a>c)?printf("a is max"):printf("c is max")):(b>c)?printf("b is max"):printf("c is max");
    //int max1=(a>b)?a:b;
    //int max2=(c>d)?c:d;
    //int maxx=(max1>max2)?max1:max2;
    //printf("%d",maxx);
  printf("Max=%d",r);
}