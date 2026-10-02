#include<stdio.h>
int main(){
int arr[3][3]={{1,5,10},{10,20,30,},{1,2,3}};
int max=0;
int row=0;
for(int i=0;i<3;i++)
{
    int sum=0;
    for(int j=0;j<3;j++)
    {
        sum+=arr[i][j];
    }
    if(sum>max)
    {
        max=sum;
        row=i;
    }
}    
printf("the row no. with max sum %d\n",row+1);
    return 0;
}