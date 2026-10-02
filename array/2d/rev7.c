#include<stdio.h>
int main(){
int n,f,i,j,a[6]={10,5,3,9,13,7};
printf("enter a no");
for(i=0;i<=5;i++)
{
    n=a[i];
    f=0;
    for(j=1;j<=n;j++)
    {
        if(n%j==0)
        {
            f++;
        }
    }
    if(f==2)
    {
        printf("prime elements are %d\n",n);
    }
    
}


    return 0;
}