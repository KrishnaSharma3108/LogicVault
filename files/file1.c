#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    //fp=fopen("raj.txt","w");
    fp=fopen("raj.txt","r");
    while((c=fgetc(fp))!=EOF)
    {
        //char c=fp.getc();
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}