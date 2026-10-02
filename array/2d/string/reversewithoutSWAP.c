#include<stdio.h>
#include<strings.h>
int main()
{
    char num[20];
    int i,l=0;
    printf("Enter name");
    scanf("%s",num);
    for(i=0;num[i]!='\0';i++)
    {
        l++;
    }
    for(i=l-1;i>=0;i--)
    {
        printf("%c",num[i]);
    }
    printf("\n");
    return 0;
}