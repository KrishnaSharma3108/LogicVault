#include<iostream>
#include<string.h>
using namespace std;
class str
{
public:
char s[20];
str(){
    strcpy(s,"abc");
}
void operator++(){
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        s[i]=s[i]+1;
        cout<<s[i];
    }
}
};
int main()
{
    str obj;
    ++obj;
    return 0;
}