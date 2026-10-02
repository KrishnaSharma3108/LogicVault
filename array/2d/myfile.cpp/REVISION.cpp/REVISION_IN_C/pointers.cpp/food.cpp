#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char food[]={'b','u','r','g','e','r','\0'};
    //array with base address
    const char *ptr=food;
    cout<<food<<" with ketchup "<<food<<endl;
    *ptr="pizza";
    //cout<<"new food"<<food<<endl;
    return 0;

}