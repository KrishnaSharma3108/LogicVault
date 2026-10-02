#include<stdio.h>
int main()
{
    int a[3][2]={{1,5},{5,6},{9,15}};
    int b[2][4]={{1,9,6,3},{8,9,6,7}};
    int rr;
    int r[3][4];
    
    for ( int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            r[i][j]=0;
            for(int k=0;k<rr;k++)
                r[i][j]+=a[i][k]*b[k][j];
            }
        } 
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}