#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,1},{3,4,1},{5,6,1}};
    int b[3][3]={{1,2,1},{3,4,1},{5,6,1}};
    int r,result[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            result[i][j]=0;
            for(int k=0;k<3;k++)
            {
                printf("%d*%d\n",a[i][k],b[k][j]);
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        printf("%d ",result[i][j]);
    printf("\n");
    }
    
    return 0;    
}