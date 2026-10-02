#include<stdio.h>
int main(){
    int i,j,a[2][2]={{1,2},{3,4}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(a[i][j]%2==0)
            {
                printf("%d ",a[i][j]);
            }
        }
    }
    return 0;
}