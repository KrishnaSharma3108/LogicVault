//#include<stdio.h>
//int main()
//{
  //  FILE *ks;
    //ks=fopen("krishna","w");
//    fclose(ks);
  //  return 0;
//}

#include<stdio.h>
int main()
{
FILE *ks;
char c;
ks=fopen("krishna","r");
while((c=fgetc(ks))!=EOF)
{
    printf("%c",c);
}
fclose(ks);
return 0;
}