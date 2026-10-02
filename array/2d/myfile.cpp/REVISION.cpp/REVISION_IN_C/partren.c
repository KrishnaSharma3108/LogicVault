#include<stdio.h>
int main()
{
    int i,j,k;
   for(i=4000;i>=1;i--)
    {
       for(j=1;j<i;j++)
        {
           printf(" ");
        }
        for(k=4000;k>=i;k--)
       {
           printf("* ");
        }
       printf("\n");
    }
    //for(;;)
return 0;    
}