#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char n1[20]="krishna";
    char n2[20]="sharma";
    strcat(n1," ");
    strcat(n1,n2);
    cout<<n1;
    return 0;
}