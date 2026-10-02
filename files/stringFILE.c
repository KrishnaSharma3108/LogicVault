#include<stdio.h>
int main()
{
FILE *ks;
    char *sub[]={"MY NAME IS KRISHNA SHARMA\n","I AM 19 YEAR OLD\n","I AM DOING BTECH CSE FROM AGC\n"};
    ks=fopen("my self","w");
    for(int i=0;i<3;i++)
    {
        fputs(sub[i],ks);
    }    
    fclose(ks);
    return 0;   
}