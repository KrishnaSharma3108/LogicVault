#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 char ar[500];
 int i,w=1,d=0,v=0,l;
 cout<<"enter a line ";
 cin.getline(ar,500);
 l=strlen(ar);
for(i=0;i<l;i++)
{
    if(ar[i]=='a'||ar[i]=='e'||ar[i]=='i'||ar[i]=='o'||ar[i]=='u')
    {v++;}
    if(ar[i]>='0'&& ar[i]<='9')
    {d++;}
    if(ar[i]==' ')
    {w++;}
}
    cout<<"Words = "<<w<<endl;
    cout<<"Vowel = "<<v<<endl;
    cout<<"Digit = "<<d<<endl;
    return 0;
}