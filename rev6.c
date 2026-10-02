#include<stdio.h>
int main()
{
  int a[10],f=0,i,n0;
  printf("enter elements in array");
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }  
printf("\n");
printf("elements are");
 for(i=0;i<10;i++)
 {
    printf("%d ",a[i]);
 }  

 printf("\nenter no");
 scanf("%d",&n0);
 for(i=0;i<10;i++)
 {
    if(a[i]==n0)
    {
     
        f++;
    }
 }
  printf("\nfrequency is %d",f);  

    return 0;
}