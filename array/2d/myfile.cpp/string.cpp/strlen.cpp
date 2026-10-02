#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
    char nm[20];
    
    cout<<"enter name";
    cin.getline(nm,20);
    int l=strlen(nm);
    cout<<"len="<<l;
    return 0;
}