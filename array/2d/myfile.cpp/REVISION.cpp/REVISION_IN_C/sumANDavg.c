#include<stdio.h>
int main()
{
    int number ,sum=0;
    float avg;
    printf("enter five numbers:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&number);
        sum=sum+number;
    }
    avg=sum/5.0;
    printf("sum=%d\n",sum);
    printf("Average=%.2f\n",avg);
    return 0;
}