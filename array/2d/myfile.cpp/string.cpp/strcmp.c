#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20],s2[20];
    printf("Enter s1,s2");
    scanf("%s%s",s1,s2);
    int  l=strcmpi(s1,s2);
    if(l==0)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    return 0;
}