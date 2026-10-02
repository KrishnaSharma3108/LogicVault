#include<stdio.h>
int main(){
int r;
printf("enter the no. of rows");
scanf("%d",&r);
int c;
printf("enter the no. of colums");
scanf("%d",&c);
printf("enter all elements");
int arr[r][c];
for(int i=0;i<r;i++)
{
    for(int j=0;j<c;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
printf("\n");
int brr[c][r];
for(int i=0;i<c;i++)
{
    for(int j=0;j<r;j++)
    {
        brr[i][j]=arr[j][i];
    }
    printf("\n");
}
printf("normal\n");
for(int i=0;i<c;i++)

{
    for(int j=0;j<r;j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
printf("transpose\n");
for(int i=0;i<c;i++)

{

    for(int j=0;j<r;j++)
    {
        printf("%d",brr[i][j]);
    }
    printf("\n");
}


    return 0;
}