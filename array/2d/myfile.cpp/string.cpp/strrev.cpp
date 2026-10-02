#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char nm[20];
    cout<<"enter name";
    cin.getline(nm,20);
    strrev(nm);
    cout<<nm;
    return 0;
}