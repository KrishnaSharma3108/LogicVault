#include<stdio.h>
int main(){
int n;
printf("enter the no.of rows/colums");
scanf("%d",&n);
printf("enter all elements");
int arr[n][n];
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}    
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        printf("%d",arr[j][i]);
    }
    printf("\n");
}
    return 0;
}