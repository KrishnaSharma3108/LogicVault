#include<stdio.h>
int main(){
int r;
printf("enter no.of rows");
scanf("%d",&r);

int c;
printf("enter no.of colums");
scanf("%d",&c);
printf("enter %d elements\n",r*c);
int arr[r][c];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        scanf("%d",&arr[i][j]);
    }
    //printf("\n");
}    

for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}    
int rotated[r][c];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        rotated[j][r-1-i]=arr[i][j];
    }
}
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        arr[i][j]=rotated[i][j];
    }
}
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
    return 0;
}