#include<iostream>
using namespace std;
struct book
{
    int AccNo;
    char title[20];
    int pages;
    float price;
}b[3],*p;
int main()
{
    p=b;
    for(int i=0;i<5;i++)
    {
        cout<<"enter ACCNo\n title\n page\n price\n"<<endl;
        cin>>(p+i)->AccNo>>(p+i)->title>>(p+i)->pages>>(p+i)->price;
    }
    for(int i=0;i<5;i++)
    {
        cout<<"enter values"<<p->AccNo<<p->title<<p->pages<<p->price<<endl;
    }
    return 0;
}