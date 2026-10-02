#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char n1[20]="krishna";
    char n2[20]="sharma";
    strcpy(n1,n2);
    cout<<n1<<","<<n2;
    return 0;
}