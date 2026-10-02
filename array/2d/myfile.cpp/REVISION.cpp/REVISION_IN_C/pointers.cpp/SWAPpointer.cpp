#include<iostream>
using namespace std;
void swap(int *a,int *b);
void swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int x,y;
    x=80;
    y=9;
    swap(&x,&y);
    cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
    return 0;
}