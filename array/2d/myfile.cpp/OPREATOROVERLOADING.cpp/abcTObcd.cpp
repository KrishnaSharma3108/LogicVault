#include<iostream>
#include<string.h>
using namespace std;
class alphabets{
    public:
    char s[3]={'a','b','c'};
};
int main(){  
    alphabets a;  
    int i;
    for(i=0;a.s[i]!='\0';i++)
    {
        a.s[i]=a.s[i]+1;
        cout<<a.s[i];
    }
    return 0;
}