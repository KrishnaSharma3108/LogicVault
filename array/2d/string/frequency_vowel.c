#include<stdio.h>
int main(){
char name[20];
int i,v=0;
printf("enter name");
scanf("%s",name);
i=0;
while (name[i]!='\0')
{
 if(name[i]=='a'||
    name[i]=='e'||
    name[i]=='i'||
    name[i]=='o'||
    name[i]=='u'
    )
 {
    v++;
 }  
 i++;
}    
printf("freq of vowel=%d",v);
    return 0; 
}